#include<stdio.h>
struct Node{
    int x;
    struct Node *next;
};
struct Node* top;

void push(int y){
    struct Node *t;
    t=malloc(sizeof(struct Node));
    t->x=y;
    t->next=top;
    top=t;
}
void pop(){
    struct Node *t;
    t=top;
    top=top->next;
}
void printStack(){
    struct Node *t=top;
    while(t!=NULL){
        printf("%d ",t->x);
        t=t->next;
    }
    printf("\n");
}
int main(){
    push(5);
    push(8);
    push(6);
    pop();
    printStack();
}
