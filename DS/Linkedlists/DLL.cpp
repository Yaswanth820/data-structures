#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next,*prev;
};
Node* createNode(Node*,int);    //create Node
//insertion
Node* addAtBeg(Node*,int);
Node* addAt(Node*,int,int);
Node* addnodes(Node*,int);
//deletion
Node* delBeg(Node*);
Node* delAt(Node*,int);
Node* delEnd(Node*);
//traversal
void printList(Node*);
int countNodes(Node*);
Node* revList(Node*);   //Reverse List

int main(){
    Node *head;
    head=NULL;
    head=addnodes(head,7);
    head=addnodes(head,8);
    head=addnodes(head,9);
    head=addnodes(head,10);
    head=addAt(head,6,3);
    printList(head);
    //head=delAt(head,3);
    //printList(head);
}

Node* createNode(Node *h,int x){
    Node *t;
    t=new Node();
    t->next=NULL;
    t->prev=NULL;
    t->data=x;
    return t;
}

Node* addnodes(Node* h,int x){
    Node *t=createNode(h,x);
    if(h==NULL)
        h=t;
    else{
        Node *p;
        p=h;
        while(p->next != NULL){
            p=p->next;
        }
        p->next=t;
        t->prev=p;
    }
    return h;
}

Node* addAtBeg(Node *h,int x){
    Node *t=createNode(h,x);
    if(h==NULL){
        return t;
    }
    else{
        Node *p,*p1;
        p=h;p1=h;
        t->next=p;
        p->prev=t;
        return t;
    }
}

Node* addAt(Node *h,int x,int pos){
    Node *t=createNode(h,x);
    if(pos==1){
        return addAtBeg(h,x);
    }
    else{
         Node *p1,*p2;
         p1=h;p2=h;
         pos--;
         while(pos-- && p2!=NULL){
            p1=p2;
            p2=p2->next;
         }
         p1->next=t;
         t->prev=p1;
         t->next=p2;
         return h;
    }
}
Node* delAt(Node *h,int pos){
    if(pos==1) {
        //return delBeg(h);
    }

    else{
        Node *p,*c,*n,*t;
        t=h;
        while(pos-- && t!=NULL){
            c=t;
            p=c->prev;
            n=c->next;
            t=t->next;
        }
        p->next=t;
        n->prev=p;
        return h;
    }
}
void printList(Node *h){
    while(h!=NULL){
        cout<<h->data<<" ";
        h=h->next;
    }
    cout<<endl;
}
