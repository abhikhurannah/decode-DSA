#include<iostream>
using namespace std;
class minheap{
    int arr[50];
    int idx;
    minheap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    int size(){
        return idx-1;
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=0){
            int parent=i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i=parent;
        }
    }
    void pop(){
        idx--;
        arr[1]=arr[idx];
        int i=1;
        while(true){
            int left=2*i;
            int right=2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                if(arr[i]>arr[left]){
                  swap(arr[i],arr[left]);
                  i=left;
                }
                 break;
            }
            if(arr[right]>arr[left] && ){
                if(arr[i]>arr[left]){
                  swap(arr[i],arr[left]);
                  i=left;
                }
                else break;
            }
            else {
                if(arr[i]>arr[right]){
                  swap(arr[i],arr[right]);
                  i=right;
                }
                else break;
            }
        }
    }
}
int main(){

}