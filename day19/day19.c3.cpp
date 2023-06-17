 #include<stdio.h>
 
 
 int main()    
{    
    int n , i , sum=0;
    float avg
	
	
	
	;
    printf("Enter size of arry: ");
    int n , i , m , j , sum=0 , mat=0;
    float avg =0;
    printf("Enter size of rows: ");
    scanf("%d",&m);
    
    
    printf("Enter size of column: ");
    scanf("%d",&n);

    int a[n];
	for(i=0 ; i<n ; i++) {
    int a[m][n];
	for(i=0 ; i<m ; i++) {

		printf("Enter elements of arry[%d] : ",i);
		for(j=0 ; j<n ; j++){

		scanf("%d",&a[i]);
	}

		for(i=0 ; i<n ; i++){


			printf("%d",a[i]);


		printf("Enter elements of arry[%d][%d] : ",i,j);

		scanf("%d",&a[i][j]);

	}
}
		for(i=0 ; i<m ; i++){


   for(i = 0; i < n; i++) {
      sum = sum + a[i];
   }

   avg = sum / n;
   printf("Average of array values is %.2f", avg);   

		}
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



