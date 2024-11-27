#include<iostream>
#include<queue>
#include<string>
using namespace std;
string partyvictory(string s){
   queue<int>q;
   queue<int>r;
   queue<int>d;
   for(int i=0; i<s.length();i++){
     q.push(i);
     if(s[i]=='r') r.push(i);
     else if(s[i]=='d') d.push(i);
   }
   while(q.size() > 1){
    if(s[q.front()=='x']) q.pop();
    else if(s[q.front()]=='r'){
        if(d.size()==0) return "radiant";
        else{
            s[d.front()]='x';
            d.pop();
            q.push(q.front());
            q.pop();
            r.push(r.front());
            r.pop();
        }
    }
    else{
        if(r.size()==0) return "dire";
        else{
            s[r.front()]='x';
            r.pop();
            q.push(q.front());
            q.pop();
            d.push(d.front());
            d.pop();
        }
    }
   }
   if(s[q.front()=='r']) return "radiant";
   else return "dire";
}
int main(){
    string str="rdddd";
    string ans= partyvictory(str);
    cout<<ans<<endl;
    return 0;
}
