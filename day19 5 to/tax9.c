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
	 	 printf("%d",a[i][j]);
}
      printf("\n");
	 }
     int sum=0, H=0;
      for (i = 0; i < m; i++) {
             
           for(j=0 ; j<n ; j++){
		   
             
			 
            if (i==j){
			
            sum += a[i][i];
            
            
        }
	   
	    if(i + j == 2){
			 	
			 	
			 	H += a[i][j];
			 	
			 }      
            
        
}
    }
        
        
        int B=0;
        
         B = sum + H;
         
         printf("%d",B);
	
	return 0;
}
