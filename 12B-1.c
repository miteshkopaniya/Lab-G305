#include<stdio.h>
void main(){
	int i,n,j,s=0;
	printf("enter a no.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		s=s+j;
		}
    }
    printf("%d",s);
}