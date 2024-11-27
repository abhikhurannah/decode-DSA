#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
class MyQueue{
    public:
    stack<int>st;
    stack<int>helper;
    void push(int x){
       st.push(x);
    }
    int pop(){
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int x=helper.top();
        helper.pop();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }
    int peek(){
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int x=helper.top();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }
    int size(){
        return st.size();
    }

};
void display(MyQueue<int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.peek();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    cout<<q.pop()<<endl;
    display(q);
    cout<<q.peek()<<endl;


}