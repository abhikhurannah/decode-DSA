#include<iostream>
#include<climits>
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
void display(node* head){
    if(head==NULL){
        return;
    }
    cout<<head->val<<" ";
    display(head->left);
    display(head->right);
    return;
}
void helper(node* root){
    if(root==NULL) return;
   node* temp=root->left;
   root->left=root->right;
   root->right=temp;
   helper(root->left);
   helper(root->right);
}
node* invert(node* root){
    helper(root);
    return root;
}

int main(){
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(9);
    node* e=new node();
    node* f=new node(-1);
    node* g=new node(7);
    
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
   
   display(a);
   node* ans=invert(a);
   cout<<endl;
   display(ans);
    
    return 0;
}
