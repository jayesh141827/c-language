#include<stdio.h>
int main(){
	
	char r , c , cont='A' ;
	
	for(r='A' ; r<='E' ; r++){
		
		
		
		for(c='A' ; c<=r ; c++){
			
			printf("%c ",cont);
			cont++;
			
			
			
		}
		printf("\n");
	}
	
	
	
	return 0;
}
