#include"stdio.h"
void main(){
	int s=0,n,r;
	printf("enter a no.: ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	while(s!=0){
		r=s%10;
		if(r==1){printf("one ");}
		if(r==2){printf("two ");}
		if(r==3){printf("three ");}
		if(r==4){printf("four ");}
		if(r==5){printf("five ");}
		if(r==6){printf("six ");}
		if(r==7){printf("seven ");}
		if(r==8){printf("eight ");}
		if(r==9){printf("nine ");}
	    if(r==0){printf("zero ");}
		s=s/10;
	}
}

