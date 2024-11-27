#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextpermutation(vector<int>v){
    int n=v.size();
    int idx=-1;
    //finding pivot index
    for(int i=n-2;i>=0;i--){
          if(v[i]<v[i+1]){
            idx=i;
            break;
          }
    }
   if(idx==-1){               //for circular permutation
    reverse(v.begin(),v.end());
    return;
   }
   //sort/reverse from idx+1 to end
   reverse(v.begin()+idx+1,v.end());

   //finding the no just greater than  v[idx]
   int j;
   for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
   }
   //swap v[idx] with v[j]
   swap(v[idx],v[j]);
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
   }
   cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    // v.push_back(3);
    // v.push_back(8);
    // v.push_back(6);
    nextpermutation(v);
}