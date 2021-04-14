#include <stdio.h>
int main(){
	int i,j,n=0,c1=0,t,c2=0;
	char a[50000];
	scanf("%s",&a);
	for(i=0;a[i]==')'||a[i]=='(';i++) n++;
	for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++) printf("%c ",a[i]);
    i=0;
	while(a[i]=='(' && a[i]!=')') {
    c1++;
    i++;
  }
  i=n-1;
	while(a[i]==')' && a[i]!='(') {
    c2++; 
    i--;
  }
  printf("c1=%d c2=%d\n",c1,c2);
  if(c1==c2) printf("%d",c1);
  else printf("%d",0);
}
