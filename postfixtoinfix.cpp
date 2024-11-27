#include<iostream>
#include<string>
#include<stack>
using namespace std;
string solve(string val1,char ch,string val2){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}
int main(){
    string s="23+44/3*-";      //"2+3-4/4*3";
    stack<string>val;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));  //check ascii of digits
        else{
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans= solve(val1, s[i], val2);
            val.push(ans);
            }
    }
  cout<<val.top()<<endl;
  return 0;
}