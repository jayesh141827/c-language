#include<stdio.h>    
     
int main()    
{    
    int n , i;
    printf("Enter size of arry: ");
    scanf("%d",&n);
    
    int a[n];
    int b[n];
    int sum[n];
    
	for(i=0 ; i<n ; i++) {
		
		printf("Enter elements of arry[%d] : ",i);
		
		scanf("%d",&a[i]);
	}
		
		
		
		
		for(i=0 ; i<n ; i++) {
		
		printf("Enter elements of arry[%d] : ",i);
		
		scanf("%d",&b[i]);
	}
		for(i=0 ; i<n ; i++){
		
		
		
		sum[i] = a[i] + b[i];
		printf("%d\n",sum[i]);
	}
		
		
		
		
		
	   
    
        
    }      
