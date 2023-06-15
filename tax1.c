#include<stdio.h>    
     
int main()    
{    
    int n , i;
    printf("Enter size of arry: ");
    scanf("%d",&n);
    
    int a[n];
	for(i=0 ; i<n ; i++) {
		
		printf("Enter elements of arry[%d] : ",i);
		
		scanf("%d",&a[i]);
	}
		
		for(i=0 ; i<n ; i++){
			
			
			printf("%d",a[i]);
		}
		
		
	   
    
        
    }      
     
        
      
