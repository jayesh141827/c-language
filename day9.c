#include <stdio.h>

int main(){

   int a,b,c;

   printf("Enter a :");
   scanf("%d",a);
  
   printf("Enter b :");
   scanf("%d",b);
  
   printf("Enter c :");
   scanf("%d",c);
  
   if(a<b){

   if(a<c){
   
   printf("a is mai/n");
   
   }
   else{
   
   printf("c is min/n");
   }

 }

 else{
 
      if(b>c){
	  



       printf("b is min/n");

    }

    else{
	
	 printf("c is main/n");
	
    }
    
 }    
    

    return 0;
}    