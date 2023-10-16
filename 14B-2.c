//Calculate the average, geometric and harmonic mean of n elements in an array.

#include<stdio.h>
#include<math.h>

void main(){
    int i,n;
    float gm=0,hm=0,avg,sum=0,sum2=0;

    printf("Enter no. of int in inputs : ");
    scanf("%d" ,&n);
    int a[n];
    for(i=0;i<n;i++){
	printf("enter value for a[%d]: ",i);
	scanf("%d",&a[i]);
    sum=sum+a[i];
    sum2=sum2*a[i];
	}
    avg=sum/n;
    gm=pow(sum2,1/n);
    hm=(gm*gm)/avg;
    printf("Average is %f" ,avg);
    printf("\nGeometric mean is %f" ,gm);
    printf("\nHramonic mean is %f" ,hm);
}