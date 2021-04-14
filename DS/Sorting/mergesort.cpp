#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int r){

}

void mergeSort(int a[],int l,int r){
    if(l>=r){
        return;
    }
    int m=(l+r-1)/2;
    mergeSort(a[],l,m);
    mergeSort(a[],m+1,r);
    merge(a[],l,m,r);
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

main(){
    int a[5]={3,5,4,2,1};
    mergeSort(a,0,4);
    printArray(a,5);
}
