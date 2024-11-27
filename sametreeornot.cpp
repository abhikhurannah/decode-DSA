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

bool issame(node *p,node* q){
    if(p==NULL && q==NULL) return true;
    if(p!=NULL && q==NULL) return false;
    if(p==NULL && q!=NULL) return false;

    if(p->val!=q->val)return false;
    bool leftans=issame(p->left,q->left);
    bool rightans=issame(p->right,q->right);
    if(leftans && rightans) return false;
    return true;

}

int main(){
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(9);
    node* e=new node();
    node* f=new node(-1);
    node* g=new node(7);
    node* h=new node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    g->left=h;
   
    cout<<issame(a,a)<<endl;
    cout<<issame(b,a->left)<<endl;
    cout<<issame(a->right,a->left)<<endl;
    
    return 0;
}
