//Read n numbers from user and print in normal and reverse order.

#include<stdio.h>

void main(){
    int i,n;
	printf("enter no. int in input : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter value for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}