#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
//TC= o(n)     SC=O(n)
vector<int> prevgreater(vector<int> &arr){
    int n=arr.size();
    vector<int>ans;
    stack<int>st;
    ans[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]){ st.pop();}
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
    //display(ans);
    //ans=prevgreater(ans);
    //display(ans);
    prevgreater(ans);
}
