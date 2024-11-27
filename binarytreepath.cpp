#include<iostream>
#include<vector>
#include<string>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void helper(node* root,string s, vector<string>& ans){
    if(root==NULL){
        return;
    }
    string a=to_string(root->val);
    if(left==NULL && right==NULL){
        s+=a;
       ans.push_back(s);
        return;
    }
   helper(root->left,s+a,ans);
    helper(root->right,s+a,ans);
}
vector<string>path(node* root){
    vector<string>paths;
    helper(root,"",paths);
    return paths;
}
int main(){
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(9);
    node* e=new node(4);
    node* f=new node(-1);
    node* g=new node(7);
    
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    vector<string>ans;
    ans=path(a);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
}
