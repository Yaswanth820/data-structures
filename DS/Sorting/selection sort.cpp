#include<iostream>
using namespace std;
main(){
    int a[10],n,i,j,min,t;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++)
            if(a[min]>a[j]) 
                min=j;
        t=a[min];
        a[min]=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++) cout<<a[i]<<" ";
}