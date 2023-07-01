#include <stdio.h>

int swap(int *a,int *b){
	
	int temp;
	
   
 
   temp = *b;
   *b = *a;
   *a = temp;
	
	printf("After Swapping : \nx = %d \ny = %d\n",*a,*b);
}
 
int main()
{
   int x, y ;
 
   printf("Enter the value of x  = ");
   scanf("%d",&x);
   
   printf("Enter the value of y  = ");
   scanf("%d",&y);
 
   printf("Before Swapping : \nx = %d\ny = %d\n", x, y);
 
   
 
   swap(&x,&y);
 
   return 0;
}
