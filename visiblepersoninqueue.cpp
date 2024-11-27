#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> canseeperson(vector<int> &arr){
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n,0);
    st.push(arr[n-1]);
    ans[n-1]=0;
    for(int i=n-2;i>=0;i--){
        int count=0;
        while(st.size()>0 && arr[i]>=st.top()){
           st.pop();
            count++;
        }
        if(st.size()!=0) count++;
        ans[i]=count;
        st.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int> nsi;
    nsi.push_back(4);
    nsi.push_back(6);
    nsi.push_back(8);
    nsi.push_back(7);   

     vector<int> ans=canseeperson(nsi);
     for(int i=0; i<nsi.size();i++){
         cout<<ans[i]<<" ";
     }
}
