#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> revealdeck(vector<int>& deck){
    int n=deck.size();
    queue<int>q;
    sort(deck.begin(), deck.end());
    vector<int>ans;
    for(int i=0;i<n;i++){
        q.push(i);
    }
    for(int i=0 ;i<n;i++){
        int idx=q.front();
        q.pop();
        q.push(q.front());
        q.pop();
        ans[idx]=deck[i];
    }
    return ans;
}
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
   vector<int>v;
   v.push_back(17);
   v.push_back(13);
   v.push_back(11);
   v.push_back(2);
   v.push_back(3);
   v.push_back(5);
   v.push_back(7);
   display(v);
   vector<int>r =revealdeck(v);
   display(r);
}
