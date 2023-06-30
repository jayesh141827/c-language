#include<stdio.h>

void main(){
	
	int a[3]={10,20,30};
	int *b[3];
	
	
	b[0]=a[2];
	b[1]=a[1];
	b[2]=a[0];
	
	
	printf("%d",*b[0],*b[1],*b[2]);
	
}