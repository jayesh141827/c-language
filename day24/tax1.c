#include<stdio.h>

void sum(int x , int y){

	printf("sum : %d\n\n",x+y);

}
void min(int x , int y){

	printf("sum : %d\n\n",x-y);

}
void mul(int x , int y){

	printf("sum : %d\n\n",x*y);

}
void div(int x , int y){

	printf("sum : %d\n\n",x/y);

}

int main(){
	
	int x;
	int y;
	char sign;
	
	while(1){
		
	printf("enter value x:");
	scanf("%d",&x);
	
	printf("enter value y:");
	scanf("%d",&y);
	
	printf("+,-,*,/\n\n");
	
	printf("make your selection : ");
	scanf(" %c",&sign);
	
	switch(sign){
		case '+':
			sum(x,y);
			break;
		case '-':
			min(x,y);
			break;
		case '*':
			mul(x,y);
			break;
		case '/':
			div(x,y);
			break;
	}
	}
	
	return 0;
}
