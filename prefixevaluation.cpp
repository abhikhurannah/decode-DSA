#include<iostream>
#include<string>
#include<stack>
using namespace std;
int solve(int val1,char ch, int val2){
    if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
    if(ch=='/') return val1/val2;
    return 0;
}
int main(){
    string s="-+23*/443";      //"2+3-4/4*3";
    stack<int>val;
    for(int i=(s.length()-1);i>=0;i--){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);  //check ascii of digits
        else{
            int val1=val.top();             // reverse the value on top in prefix evaluation
            val.pop();
            int val2=val.top();
            val.pop();
            int ans= solve(val1, s[i], val2);
            val.push(ans);
            }
    }
  cout<<val.top()<<endl;
  return 0;
}