#include<stdio.h>    
     
int main()    
{    
    int n , i , m , j , sum=0 , mat=0;
    float avg =0;
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
		
	
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
    }
    
    avg=sum/(m*n);
    printf("\nAverage of all the elements of the matrix = %.2f",avg);
		
		return 0;
	}
		
	   
    
    
      
     
        
      


