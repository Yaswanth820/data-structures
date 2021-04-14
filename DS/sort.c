/*
#include<stdio.h>
main(){
    int n;
    scanf("%d",&n);
    int a[n],i,x,c=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    while(c<n-1){
        for(i=0;i<n;i++){
            if(a[i]>a[i+1]){
                x=a[i];
                a[i]=a[i+1];
                a[i+1]=x;
            }
        }
        //for(i=0;i<n;i++) cout<<a[i]<<" ";
        //cout<<endl;
        c++;
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
}
*/
#include<stdio.h>
main(){
    int a[10],i,x,n,c=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element for a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Before sorting the elements in the array are\n");
    for(i=0;i<n;i++){
        printf("Value of a[%d] = %d\n",i,a[i]);
    }
    while(c<n-1){
        for(i=0;i<n;i++){
            if(a[i]>a[i+1]){
                x=a[i];
                a[i]=a[i+1];
                a[i+1]=x;
            }
        }
        c++;
    }
    printf("After sorting the elements in the array are\n");
    for(i=0;i<n;i++){
        printf("Value of a[%d] = %d\n",i,a[i]);
    }
}