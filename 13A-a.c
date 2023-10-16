//13A1-a
#include<stdio.h>
void main(){
	int i,j,n;
	for(i=1;i<=5;i++){
		for(j=1;j<=n-i;j++){
        printf(" ");
    }
		for(j=1;(i+j)<=6;j++){
			printf(" *");
		}
		printf("\n");
	}
}	