#include<stdio.h>

int main(){

	int r,c,k;
	for(r=5 ; r>=1 ; r--){
		for(k=1;k<r;k++){
			printf(" ");
		}
		for(c=r; c<=5 ; c++){
			printf("%d",r);
		}
		printf("\n");
       
  

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

	

		for(i=0 ; i<m ; i++){

			for(j=0 ; j<n ; j++){

		    	printf("%d",a[i][j]);
		   }
		   printf("\n");
	}

		int sum;

		 for(i=0 ; i<m ; i++)
    {

        for(j=0 ; j<n ; j++)
        {
            sum += a[i][j];
        }
        printf("The Sum of Column Elements in a Matrix =  %d \n", sum );
    }

		return 0;
	}






