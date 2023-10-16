//Count number of positive or negative number from an array of n numbers.

#include<stdio.h>
void main(){
	int i,n,cp=0,cn=0;
	printf("enter no. int in input: ");
	scanf("%d",&n);
	int a[n];
		for(i=0;i<n;i++){
		printf("enter value for a[%d]: ",i);
		scanf("%d",&a[i]);
		if(a[i]<0){cn++;}
		else{cp++;}
	}
	printf("%d are positive %d are negative",cp,cn);
}