#include<iostream>
#include<vector>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    double r1=(a.first*1.0)/(a.second*1.0);
    double r2=(b.first*1.0)/(b.second*1.0);
    return r1>r2;
}
int f_k(vector<int>&profit,vector<int>&weight,int n,int w){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({(profit[i],weight[i])});
    }
    sort(v.begin(),v.end(),cmp);
    int res=0;
    for(int i=0;i<n;i++){
        if(w>=v[i].second){
            res+=v[i].first;
            w-=v[i].second;
        }
        else{
            res+=(v[i].first*1.0/v[i].second)*w;
            w=0;
        }
    }
    return res;
}
int main(){

}