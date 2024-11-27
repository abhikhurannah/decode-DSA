#include <iostream>
using namespace std;
class node
{ // user defined data type
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* partition(node* head,int k){
    node* lo=new node(100);
    node* hi=new node(100);
    node* th=hi;
    node* tl=lo;
    node* temp=head;

    while(temp!=NULL){
         if(temp->val<k){
            tl->next=temp;
            temp=temp->next;
            tl=tl->next;
         }
         else {
            th->next=temp;
            temp=temp->next;
            th=th->next;
         }
    }
   temp->next=hi->next;
   hi->next=NULL;
   return lo->next;
}
int main(){
    node* a = new node(10);
    node* b = new node(38);
    node* c = new node(20);
    node* d = new node(45);
    node* e = new node(32);
    node* f = new node(15);
    node* g = new node(80);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    int k=20;
    display(a);
    node* ans = partition(a,k);
    display(ans);
}