#include<stdio.h>
struct Node{
    int x;
    struct Node *next;
};
typedef struct Node *NODE;
NODE addNodes(struct Node *h,int y){
    struct Node *t;
    t=malloc(sizeof(struct Node));
    t->x=y;
    t->next=NULL;
    if(h==NULL) {
        h=t;
    }
    else {
        struct Node *p;
        p=h;
        while(p->next != NULL){
            p=p->next;
        }
        p->next=t;
    }
    return h;
}
void count(struct Node *h){
    int c=0;
    while(h != NULL){
        c++;
        h=h->next;
    }
    printf("No. of Nodes: %d\n",c);
}
void traverseList(struct Node *t){
    while(t != NULL){
        printf("%d ",t->x);
        t=t->next;
    }
    printf("\n");
}
int main(){
    int x;
    struct Node *h=NULL;
    printf("Enter data: ");
    scanf("%d",&x);
    while(x!=-1){
        h=addNodes(h,x);
        scanf("%d",&x);
    }
    traverseList(h);
    count(h);
}
