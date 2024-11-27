#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&nums,int target){
      int n=nums.size();
      int lo=0;
      int hi=n-1;
      //finding pivot element(smallest element)

      if(n==2){
        if(target==nums[0]) return 0;
        if(target==nums[1]) return 1;
        else return -1;
      }
      int pivot=-1;
      while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        
        if(mid==0) lo=mid+1;
        else if(mid==n-1) hi=mid-1;

        else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
           pivot=mid;
        }
        else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
           pivot=mid+1;
        }
        else if(nums[mid] >nums[hi]){
            lo=mid+1;
        }
        else hi=mid-1;
      }
       
       if(pivot==-1){      // pivot=-1 means already sorted or no rotation
        lo=0;
        hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;

        return -1;
       }
      //searching for target
       if(target>=nums[0] && target<=nums[pivot-1]){
        lo=0;
        hi=pivot-1;
        //normal binary search
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
      }
      else {
        lo=pivot;
        hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
      }
}
}
int main(){
    vector<int>arr{14,13,11,2,3,4,5,6,7,8,9,10};
    int target=11;
    cout<<search(arr,target);
    return 0;
}