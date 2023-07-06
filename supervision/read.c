#include<stdio.h>

void main(){
	
	FILE *p;
	
	char name[20];
	
	p= fopen("Demo.txt","r");
	
	if(p == NULL){
		printf("error !! ");
		
	}
	else{

		fgets(name,20,p);
		
		fputs(name,p);
		fputs("\n",p);
		fclose(p);
		
	}
}