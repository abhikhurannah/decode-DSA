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
node* reversaliterative(node* head){
    node*curr=head;
    node* prev=NULL;
    node* Next=NULL;
    while(curr!=nullptr){
       Next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=Next;
    }
    return prev;
}
node* reorder(node* head){
    node* slow=head;
    node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    
    node* a=head;
    node* b=reversaliterative(slow->next);
    slow->next=NULL;
    node* c=new node(100);
    node* tempA=a;
    node* tempB=b;
    node* tempC=c;
    while(tempA!=NULL && tempB!=NULL){
        tempC->next=tempA;
        tempA=tempA->next;
        tempC=tempC->next;
        tempC->next=tempB;
        tempB=tempB->next;
        tempC=tempC->next;
    }
    tempC->next=tempA;
    return a;
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
    display(a);
    node* ans = reorder(a);
    display(ans);
}