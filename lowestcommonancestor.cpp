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
bool exists(node* root, node* target){
    if(root==NULL) return false;
    if(root==target) return true;
    return exists(root->left,target) || exists(root->right,target);
}
node* lowestancestor(node* root,node* p,node* q){
   if(root==p && root==q) return root;
   else if(exists(root->left,p) && exists(root->right,q)) return root;
   else if(exists(root->right,p) && exists(root->left,q)) return root;
   else if(exists(root->left,p) && exists(root->left,q)){
     return lowestancestor(root->left,p,q);
   }
   else {
     return lowestancestor(root->right,p,q);
   }
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
    node* ans;
    ans=path(a);
    
    
    return 0;
}
