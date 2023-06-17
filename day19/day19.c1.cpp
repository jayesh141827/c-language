#include<stdio.h>
int main()    
{    
    int n , i;
    printf("Enter size of arry: ");
    int n , i , m , j;
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


		printf("Enter elements of arry[%d][%d] : ",i,j);

		scanf("%d",&a[i][j]);

	}
}
		for(i=0 ; i<m ; i++){

			printf("%d",a[i]);
		}
			for(j=0 ; j<n ; j++){

		    	printf("%d",a[i][j]);
		   }
		   printf("\n");
	}


		return 0;
	}

