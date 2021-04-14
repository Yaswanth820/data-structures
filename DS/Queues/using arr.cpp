#include<iostream>
using namespace std;
int q[3],f=-1,r=-1;
void enq(int x){
    if(r==3) printf("Overflow\n");
    else{
        r++;
        q[r]=x;
    }
}
void dq(){
    if(f==-1 && r==-1) cout<<"Empty"<<endl;
    else
        f++;
}
void print(){
    int n;
    if(f==-1 && r==-1) cout<<"Empty"<<endl;
    else{
        n=f+1;
        while(n<=r){
            cout<<q[n]<<" ";
            n++;
        }
    }
}
int main(){
    enq(5);
    enq(6);
    enq(7);

    print();
}
