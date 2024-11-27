#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void fillsieve(vector<int>& sieve){
    int n=sieve.size()-1;                         //O(n*log(log(n)))
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j+=i){
           sieve[j]=0;
        }
    }
}
int distinctprimes(vector<int>& nums){
    int n=nums.size();
    int mx=-1;
    for(int i=0;i<n;i++){
        mx=max(mx,nums[i]);
    }
    vector<bool>sieve(n+1,1);
    if(mx+1>0) sieve[0]=0;      
    if(mx+1>1) sieve[1]=0;
    fillsieve(sieve);
    vector<int>primes;
    for(int i=2;i<=mx;i++){
        if(sieve[i]==1) primes.push_back(i);
    }  
    vector<bool>taken(primes.size(),0);
    for(int i=0;i<nums.size();i++){
        int ele=nums[i];
        for(int j=0;j<primes.size();j++){
            if(primes[i]>ele) break;
            if(ele%primes[i]==0){
                taken[j]=1;
            }
        }
    }
    int count=0;
    for(int i=0;i<taken.size();i++){
        if(taken[i]==1) count++;
    }

   return count;
}
 
int main(){
  vector<int> arr;
  arr.push_back(2);
  arr.push_back(4);
  arr.push_back(8);
  arr.push_back(16);
  cout<< distinctprimes(arr);
   return 0;
}