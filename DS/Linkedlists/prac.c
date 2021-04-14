#include<stdio.h>
struct Node{
    int x;
    struct Node *next;
};
void traverseList(struct Node *h){
    while(h != NULL){
        printf("%d ",h->x);
        h=h->next;
    }
}
void count(struct Node *h){
    int c=0;
    while(h != NULL){
        c++;
        h=h->next;
    }
    printf("No. of Nodes: %d",c);
}
int main(){
    struct Node *head,*node2,*tail;
    head=malloc(sizeof(struct Node));

    head->x=1;

    printf("Value: %d\n",head->x);
    printf("Current address: %d\n", head);

    node2=malloc(sizeof(struct Node));

    head->next=node2;
    printf("Next address after linking: %d\n", head->next);
    node2->x=2;
    node2->next=NULL;

    printf("Value: %d\n",node2->x);
    printf("Current address: %d\n", node2);

    traverseList(head);
    printf("\n");
    count(head);
}
