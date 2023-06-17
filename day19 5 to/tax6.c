#include<stdio.h>

int main(){
	 
	 int n,m;
	 printf("enter size of row:");
	 scanf("%d",&m);
 	 printf("enter size of colum:");
	 scanf("%d",&n);
	 int i,j;
	 int a[m][n];
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
		 
	 	 printf("enter value[%d][%d]:",i,j);
	 	scanf("%d",&a[i][j]);
	 	
	 }
}
	 	 for(i=0;i<m;i++){
	 	 	
	 	 for(j=0;j<n;j++){
	 	 printf("%d ",a[i][j]);
}
      printf("\n");
	 }
      
      
      
      
        for(j = 0; j < n; j++)
    {
        
		
		float sum=0;
		
		
        for(i = 0; i < m; i++)
        {
            sum += a[i][j];
        }
        printf("The Sum of Elements of a column in a Matrix =  %f \n", sum );
    }

     

	
	return 0;
}
