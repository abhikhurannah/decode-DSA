#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
// it is good  time complexity   O(n)

    int custmber[]={1,2,9,8,8,6,8,6};
    int n=sizeof(custmber)/sizeof(custmber[0]);
    int grumpy[]={0,1,0,0,1,1,0,1};
    int k=3;
    int maxloss=INT_MIN;
    int idx=-1;
    int prevsum=0;
    for(int i=0;i<k;i++){
       prevsum+=custmber[i]*grumpy[i];
    }
    maxloss=prevsum;
    // sliding window algorithm;
    int i=1;
    int j=k;
    while(j<n){
      prevsum=prevsum+(custmber[j]*grumpy[j]-custmber[i-1]*grumpy[j-1]);
      if(prevsum>maxloss){
        maxloss=prevsum; 
        idx=i;    
        }
        i++;
        j++;
   }
   cout<<maxloss<<"  "<<idx;
   
}