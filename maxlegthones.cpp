#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
// finding minimum size subarray

    int arr[]={2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
   
     for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
   
    int i=0;
    int j=0;
    int len;
    int minlen=INT_MAX;
    int sum=0;
    int target=10;
        
    while(j<n){
        sum+=arr[j];
        while(sum>=target){
            len=j-i+1;
            minlen=min(minlen,len);
            sum-=arr[i];
            i++;
        }
       
     j++;
   }
   if(minlen==INT_MAX) return 0;
   else cout<<minlen<<endl;
    
   
}