#include<iostream>
#include<vector>
using namespace std;
 bool target(vector<vector<int>>v,int target){
    int r=v.size()-1;
    int c=v[0].size();
    int i=0;
    int j=c-1;
    while(i<r && j>=0){
        if(v[i][j]==target) return true;
        else if(v[i][j]>target) j--;
        else i++;
    }
    return false;
 }


int main(){
  vector<int>v1;
  v1.push_back(1);
  v1.push_back(4);
  v1.push_back(7);
  v1.push_back(11);
  v1.push_back(15);

  vector<int>v2;
  v2.push_back(2);
  v2.push_back(5);
  v2.push_back(8);
  v2.push_back(12);
  v2.push_back(19);

  vector<int>v3;
  v3.push_back(3);
  v3.push_back(6);
  v3.push_back(9);
  v3.push_back(16);
  v3.push_back(22);
 
   vector<vector<int>>v;
   v.push_back(v1);
   v.push_back(v2);
   v.push_back(v3);
   target(v,6);
  
}