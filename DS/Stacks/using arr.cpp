#include<iostream>
#define MAX 3
using namespace std;

int a[3],top=-1;
void push(int x){
    if(top==3){
        cout<<"Overflow\n";
    }
    else{
        top++;
        a[top]=x;
    }
}
void pop(){
    if(top<0){
        cout<<"Underflow\n";
    }
    else{
        top--;
    }
}
void printStack(){
    int i,t=top;
    for(i=t;i>=0;i--)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    push(5);
    push(8);
    push(6);
    //pop();
    printStack();
}
