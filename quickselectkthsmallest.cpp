#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivot=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivot) count++;
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=arr[pivotidx]) i++;
        else if(arr[j]>arr[pivotidx]) j--;
        else if(arr[i]>arr[pivotidx] && arr[j]<=arr[pivotidx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
   
}
void kthsmallest(int arr[],int si,int ei,int k){
   
    int pi=partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return kthsmallest(arr,pi+1,ei,k);
   else return kthsmallest(arr,si,pi-1,k);

 }
int main()
{
   int arr[]={1,67,13,12,34,74,11,67,38,82};
   int n=sizeof(arr)/sizeof(int);
   for(int i=0;i<n;i){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   int k=3;
   kthsmallest(arr,0,n-1,k);
   for(int i=0;i<n;i){
    cout<<arr[i]<<" ";
   }
}