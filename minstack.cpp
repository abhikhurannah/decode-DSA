#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class minstack{
    public:
   stack<int>st;
   stack<int>helper;
   int size(){
    return st.size();
   }
   void push(int x){
    st.push(x);
    if(st.size()==0 || x<st.top()) helper.push(x);
    else helper.push(helper.top());
   }
   void pop(){
    if(st.size()<=0) cout<<"stack underflow";
    st.pop();
    helper.pop();
   }
   int top(){
    return st.top();
   }
   int getmin(){
    return helper.top();
   }
};
int main(){
   minstack st;
//    cout<<st.size()<<endl;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(4);
   st.push(40);
   cout<<st.getmin()<<endl;
   st.pop();
   cout<<st.getmin()<<endl;
}