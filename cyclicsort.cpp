#include<iostream>
using namespace std;
void cyclicsort(int arr[],int n){
   int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(i==correctidx) i++;
        else swap(arr[correctidx],arr[i]);
    }
     for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
int main()
{
   int arr[]={1,7,2,6,3,6,4,5};
   int n=sizeof(arr)/sizeof(int);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   cyclicsort(arr,n);
  
}