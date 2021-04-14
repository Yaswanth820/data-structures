#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

Node* createNode(int x){
    Node *t;
    t=new Node();
    t->data=x;
    t->next=t;
    return t;
}

Node* addNodes(Node *h,int x){
    Node *t=createNode(x);
    if(h==NULL){
        return t;
    }
    else{
        Node *p1;
        p1=h;
        if(p1->next == h){
            p1->next=t;
            t->next=h;
        }
        else{
            while(p1->next != h){
                p1=p1->next;
            }
            p1->next=t;
            t->next=h;
        }
        return h;
    }
}

Node* addBeg(Node *h,int x){
    Node *t=createNode(x);
    if(h==NULL){
        return t;
    }
    else{
        Node *p1;
        p1=h;
        t->next=h;
        if(p1->next == h){
            p1->next=t;
        }
        else{
            while(p1->next != h){
                p1=p1->next;
            }
            p1->next=t;
        }
        return t;
    }
}

Node* delBeg(Node *h){
    if(h==NULL){

    }
    else{
        Node *p1,*p2;
        p1=h;
        if(p1->next == h){
            delete p1;
            return NULL;
        }
        else {
            p2=h->next;
            while(p1->next != h){
                p1=p1->next;
            }
            p1->next=p2;
            return p2;
        }
    }
}
int countNodes(Node *h){
    Node *p;
    p=h;
    int c=0;
    if(p!=NULL){
        do{
            c++;
            p=p->next;
        }while(p!=h);
    }
    return c;
}

Node* delEnd(Node *h){
    if(h==NULL){}
    else{
        Node *p1,*p2;
        p1=h;
        if(h->next == NULL){
            delete h;
            return NULL;
        }
        else {
            p2=p1;
            while(p1->next != h){
                p2=p1;
                p1=p1->next;
            }
            p2->next=h;
            return h;
        }
    }
}
Node* delAt(Node *h,int pos){
    int c=countNodes(h);
    if(pos==1) return delBeg(h);
    else if(pos==c) return delEnd(h);
}
void printList(Node *h){
    Node *p;
    p=h;
    if(p!=NULL){
        do{
            cout<<p->data<<" ";
            p=p->next;
        }while(p!=h);
    }
    cout<<endl;
}

int main(){
    Node *head=NULL;
    head=addNodes(head,6);
    head=addNodes(head,7);
    head=addBeg(head,5);
    head=delAt(head,3);
    printList(head);

}
