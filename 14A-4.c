//Find Max, Min, Sum, Avg. of given numbers from an array.

#include<stdio.h>
void main(){
	int i,n,max,min,sum=0;
	float avg;
	printf("enter no. int in inputs: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter value for a[%d]: ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	min=a[0];
	for(i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
    }
	max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}	
}
printf("Max: %d, Min: %d, Sum: %d, Avg: %f",max,min,sum,avg);
}