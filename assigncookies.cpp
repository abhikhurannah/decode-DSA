#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={12,8,11,23,15,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n,0);
    int x=0;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindex=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else if(arr[j]<min){ 
                min=arr[j];
                mindex=j;
            }
        }
        arr[mindex]=x;
        v[mindex]=1;
        x++;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}