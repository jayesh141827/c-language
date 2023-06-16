#include<stdio.h>    
     
int main()    
{    
    int n , i ,m , j;
    printf("Enter size of row: ");
    scanf("%d",&n);
    
    
    printf("Enter size of column: ");
    scanf("%d",&m);
    
    
    int a[m][n];
    int b[m][n];
    int sum[m][n];
    
	for(i=0 ; i<m ; i++) {
		
		for(j=0 ; j<n ; j++){
		
		
		printf("Enter elements of arry[%d][%d] : ",i,j);
		
		scanf("%d",&a[i][j]);
	}
	}
		
		
		
		for(i=0 ; i<m ; i++) {
			
			
			for(j=0 ; j<n ; j++){
				
				
		
		printf("Enter elements of arry[%d][%d] : ",i,j);
		
		scanf("%d",&b[i][j]);
	}
	
}
		for(i=0 ; i<m ; i++){
			
			
		for(j=0 ; j<n ; j++){
		
		
		
		sum[i][j] = a[i][j] + b[i][j];
		printf("%d\n",sum[i][j]);
	}
	}
		
		
		
		
	   
    
        
    }      
	   
    
    
      
     
        
      

