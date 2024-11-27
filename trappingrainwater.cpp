#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void trapwater(vector<int>v){
    int n=v.size();
    // previous greatest arraay
     vector<int>arr;
     arr[0]=-1;
     int max=v[0];
      for(int i=1;i<n;i++){
         arr[i]=max;
          if(v[i]>max){
            max= v[i];
          }
         
      }
    // next greatest arraay
     vector<int>brr;
     arr[n-1]=-1;
     int maxi=v[n-1];
      for(int i=n-2;i>=0;i--){
         brr[i]=maxi;
          if(v[i]>maxi){
            maxi= v[i];
          }
         
      }
      vector<int>crr;
      for(int i=0;i<n;i++){
        crr[i]=min(arr[i],brr[i]);
      }
      //calculating water
      int water=0;
      for(int i=1;i<n-1;i++){
        if(crr[i]>v[i]){
          water+=(crr[i]-v[i]);
        }
      }
    cout<<water;
}
int main(){
  vector<int>v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(1);
  v.push_back(4);
  v.push_back(2);
  v.push_back(3);
  v.push_back(1);
  trapwater(v);

}