#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    // int pivot=arr[si];
    // int count=0;
    // for(int i=si+1;i<=ei;i++){
    //     if(arr[i]<=pivot) count++;
    // }
    // int pivotidx=count+si;
    // swap(arr[si],arr[pivotidx]);
    // int i=si;
    // int j=ei;
    // while(i<pivotidx && j>pivotidx){
    //     if(arr[i]<=arr[pivotidx]) i++;
    //     else if(arr[j]>arr[pivotidx]) j--;
    //     else if(arr[i]>arr[pivotidx] && arr[j]<=arr[pivotidx]){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
    // }
     int pivot = arr[si];
    int count = 0;

    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotidx = si + count;
    swap(arr[si], arr[pivotidx]);

    int i = si, j = ei;
    while (i < pivotidx && j > pivotidx) {
        if (arr[i] <= arr[pivotidx])
            i++;
        else if (arr[j] > arr[pivotidx])
            j--;
        else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return ;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);

 }
int main()
{
   int arr[]={1,67,13,12,34,74,11,67,38,82};
   int n=sizeof(arr)/sizeof(int);
   for(int i=0;i<n;i){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<partition(arr,0,n-1);
   //quicksort(arr,0,n-1);
//    for(int i=0;i<n;i){
//     cout<<arr[i]<<" ";
//    }
}