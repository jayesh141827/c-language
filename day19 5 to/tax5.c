
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



      for(i = 0; i < m; i++)
    {
     int sum = 0;
        for(j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        printf("The Sum of row Elements in a Matrix =  %d  \n", sum );
    }
    
    return 0;
}


	


