#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node* addnodes(Node *h,int x){
    Node *t;
    t = new Node();
    t->data=x;
    t->next=NULL;
    if(h==NULL) {
        h=t;
    }
    else {
        Node *p;
        p=h;
        while(p->next != NULL){
            p=p->next;
        }
        p->next=t;
    }
    return h;
}
Node* addAt(Node *h,int x,int p){
    Node *t,*t2;
    t=new Node;
    t->data=x;
    t2=h;
    for(int i=1;i<p;i++){
        t2=t2->next;
    }
    t->next=t2->next;
    t2->next=t;
    return h;
}
int countNodes(Node *h){
    int c=0;
    while(h!=NULL){
        c++;
        h=h->next;
    }
    return c;
}
Node* deleteFirstNode(Node *h){
    Node *t;
    t=h->next;
    h->next=NULL;
    return t;
}
Node* deleteLastNode(Node *h){
    Node *t,*t2;
    t=h;
    if(h==NULL){}

    else{
        while(t->next!=NULL){
            t2=t;
            t=t->next;
        }
        t2->next = NULL;
    }
    return h;
}
Node* deleteAt(Node *h,int p){

}
void traverseList(Node *h){
    while(h!=NULL){
        cout<<h->data<<" ";
        h=h->next;
    }
    cout<<endl;
}
void searchElement(Node *h,int x){
    int c=0;
    while(h!=NULL){
        if(h->data == x) {
            c=1;break;
        }
        h=h->next;
    }
    if(c==0) cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;
}
int main(){
    Node *head;
    head=NULL;
    head=addnodes(head,5);
    head=addnodes(head,6);
    head=addnodes(head,8);
    head=addAt(head,7,2);
    head=addAt(head,9,3);
    head=deleteLastNode(head);
    traverseList(head);
    cout<<endl;
}
