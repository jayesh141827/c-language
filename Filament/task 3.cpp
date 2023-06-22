
#include <stdio.h>
#include <string.h>
 
int main()
{
    char val; 
    
 
    printf("Enter  vaiue : ");
    scanf("%c",&val);
    
 
    
        if(val>='a' && val<='z'){
		
         val-=32;
        
         
 	}
 	
     
    printf("%c",val);
 
 
    return 0;
}

