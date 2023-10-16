//Count number of even or odd number from an array of n numbers.

#include<stdio.h>
void main(){
	int i,n,co=0,ce=0;
	printf("enter no. int in input: ");
	scanf("%d",&n);
	int a[n];
		for(i=0;i<n;i++){
		printf("enter value for a[%d]: ",i);
		scanf("%d",&a[i]);
		if(a[i]%2!=0){co++;}
		else{ce++;}
	}
	printf("%d are even %d are odd",ce,co);
}