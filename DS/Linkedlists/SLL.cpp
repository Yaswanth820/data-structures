#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
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
    //head=addAtBeg(head,6);
    head=addAt(head,6,1);
    printList(head);
    head=delAt(head,2);
    printList(head);
}

Node* addnodes(Node *h,int x){
    Node *t;
    t = new Node();
    t->data=x;
    t->next=NULL;
    if(h==NULL){
        h=t;
    }
    else{
        Node *p;
        p=new Node();
        p=h;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=t;
    }
    return h;
}

Node* addAtBeg(Node *h,int x){
    Node *t;
    t=new Node();
    t->data=x;
    t->next=NULL;
    if(h==NULL){
        h=t;
    }
    else{
        t->next=h;
        h=t;
    }
    return h;
}

Node* addAt(Node *h,int x,int pos){
    Node *t,*p1,*p2;
    t=new Node();
    t->data=x;
    t->next=NULL;
    if(pos==0) return addAtBeg(h,x);
    else if(pos>=1){
        p1=h;
        pos--;
        while(pos-- && p1 != NULL){
            p1=p1->next;
        }
        p2=p1->next;
        p1->next=t;
        t->next=p2;
        return h;
    }
}

Node* delEnd(Node *h){
    Node *t,*p;
    t=h;
    while(t->next != NULL){
        p=t;
        t=t->next;
    }
    p->next=NULL;
    return h;
}

Node* delBeg(Node *h){
    Node *t,*p;
    t=h;
    p=t->next;
    t->next=NULL;
    return p;
}

Node* delAt(Node *h,int pos){
    if(pos==1) return delBeg(h);
    else if(pos-1>countNodes(h)) return h;
    else{
        pos--;
        Node *t,*p;
        t=h;
        while(pos-- && t->next!=NULL){
            p=t;
            t=t->next;
        }
        if(t->next == NULL){
            p->next=NULL;
        }
        else{
            p->next=t->next;
        }
        return h;
    }
}

int countNodes(Node *h){
    int c=0;
    while(h != NULL){
        h=h->next;
        c++;
    }
    return c;
}

void printList(Node* h){
    while(h != NULL){
        cout<<h->data<<" ";
        h=h->next;
    }
    cout<<endl;
}
