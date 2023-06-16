#include<stdio.h>    
     
int main()    
{    
    int n , i , m , j , H;
    printf("Enter size of rows: ");
    scanf("%d",&m);
    
    
    printf("Enter size of column: ");
    scanf("%d",&n);
    
    int a[m][n];
	for(i=0 ; i<m ; i++) {
		
		for(j=0 ; j<n ; j++){
		
		
		
		printf("Enter elements of arry[%d][%d] : ",i,j);
		
		scanf("%d",&a[i][j]);
		
	}
}
		for(i=0 ; i<m ; i++){
			
			for(j=0 ; j<n ; j++){
					
		    	printf("%d",a[i][j]);
		   }
		   printf("\n");
		   
		   
	}
		 H = sizeof(a)/sizeof(a[0][0]);    
        
    printf("Elements of given array : %d  ", H);
		
		return 0;
	}
		
	   
    
    
      
     
        
      


