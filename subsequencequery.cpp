#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(0);
    arr.push_back(5);
    arr.push_back(9);
    int n=sizeof(arr)/4;

    vector<int>query;
    query.push_back(3);
    query.push_back(8);
    query.push_back(10);
    int m=sizeof(query)/4;
    vector<int>ans(m);


    sort(arr.begin(),arr.end());
   
    //prefix sum
    int pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    
    for(int i=0;i<n;i++){                          // we can slve this part with binary search
        int len=0;
        for(int j=0;j<m;j++){
        if(arr[i]<=pre[j]) len++;
        else break;

        }
        ans[i]=len;
    }
    
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}