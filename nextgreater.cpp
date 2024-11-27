#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
//TC= o(n)     SC=O(n)
vector<int> nextgreater(vector<int> &arr){
    int n=arr.size();
    vector<int>ans;
    stack<int>st;
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
   return ans;
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> ans;
    ans.push_back(4);
    ans.push_back(6);
    ans.push_back(4);
    ans.push_back(7);   
    ans.push_back(3);   
    ans.push_back(9);   
    ans.push_back(1);   
    display(ans);
    ans=nextgreater(ans);
    display(ans);
}
