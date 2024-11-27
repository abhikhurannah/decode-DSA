#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,-2,-2,-4,6,6,4,8,-1};
    int n=sizeof(arr)/4;
    int k=3;
    queue<int>q;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]<0) ans.push_back(i);
    }
    int i=0;
    while(i<=n-k){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 && q.front()>=i+k){
            ans.push_back(0);
        }
        else ans.push_back(arr[q.front()]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}