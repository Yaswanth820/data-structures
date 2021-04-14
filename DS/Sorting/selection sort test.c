#include<stdio.h>
main(){
    int a[20],n,i,j,k,t,min_i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        min_i=i;
        for(j=i+1;j<n;j++){
            if(a[min_i]>a[j]) {
                min_i=j;
            }
        }
        t=a[min_i];
        a[min_i]=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
}