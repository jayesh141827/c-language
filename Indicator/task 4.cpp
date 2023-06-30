#include<stdio.h>

void len(char *a[100]){
	 
	 printf("%d",sizeof(*a));
}

int main(){
	
	char a[100];
	
	printf("Enter the value :");
	scanf("%s",&a);
	
	len(&a);
	
	return 0;
	
}
