#include<stdio.h>

intmain(){
	int i=1;
	int n,sum=1;
	printf("Enter value :");
	scanf("%d",&n);
	while(i<=n){

		sum=sum*i;
		i++;
	}

	printf("sum:%d",sum,n);


	return 0;
}
