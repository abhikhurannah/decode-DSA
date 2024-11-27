#include <iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;


int main(){
   vector<string> str;
   push_back("flow");
   push_back("flower");
   push_back("flex");
   int n=str.size();
   string first=str[0];
   string last=str[n-1];
   string s="";
   if(n==1) cout<<str[0];
   else {
      for(int i=0;i<(min(first.length(),last.length()));i++){
         if(first[i]==last[i]){ s+=first[i];}
         else break;
      }
   }
   cout<<s<<endl;
   return 0;

   

}
  