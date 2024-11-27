#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(-1);
    arr.push_back(-8);
    arr.push_back(0);
    arr.push_back(5);
    arr.push_back(-9);
    int n=sizeof(arr);
    
    sort(arr.begin(),arr.end());
    int suf[n];
    suf[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=arr[i]+suf[i+1];
    }
    int idx=-1;
    for(int i=0;i<n;i++){
        if(suf[i]>=0){
            idx=i;
            break;
        }
    }
    if(idx==-1) cout<<"not prepare any dish ";
   int x=1;
   int sum=0;
   for(int i=idx;i<n;i++){
      sum+=arr[i]*x;
      x++;
   }
   cout<<sum<<endl;
    return 0;
}