#include<stdio.h>

void main(){
	
	FILE *p;
	
	char name[20];
	
	p= fopen("Demo.txt","a");
	
	if(p == NULL){
		printf("error !! ");
		
	}
	else{
		printf("Enter the text :");
		gets(name);
		
		fputs(name,p);
		fputs("\n",p);
		fclose(p);
		
	}
}