//Read five person height and weight and 
//count the number of person having height greater than 170 and weight less than 50.

#include<stdio.h>
void main(){
	int i,c=0;
	float h[5],w[5];
	
	for(i=0;i<5;i++){
		printf("Enter value for hight[of person %d] in cm: ",i+1);
		scanf("%f",&h[i]);
		printf("Enter value for weight[of person %d] in kg: ",i+1);
		scanf("%f",&w[i]);
        
	}
	for(i=0;i<5;i++){
    if(h[i]>=170 && w[i]<=50){c++;}
	}
	printf("%d person having height greater than 170 and weight less than 50",c);
}