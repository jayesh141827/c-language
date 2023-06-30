#include<stdio.h>

int main(){

	int n;
	
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	int *b[n];
	int i;
	
	for(i=0;i<n;i++){
		
		printf("Enter the elements of array :");
		scanf("%d",&a[i]);
		  
		  b[i]=&a[i];
		  
		 
		  
	}
	
	for(i=0;i<n;i++){
		
		printf(" entered elements : %d \n",*b[i]);
	}
	
	return 0;
	
}