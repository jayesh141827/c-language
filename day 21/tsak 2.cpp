#include<stdio.h>
#include<string.h>
int main()
{
	int z,x;

	char a[] = "jayesh141827@gmail.com";
	char b[] = "jayesh141827";

    char G[50];
	char d[50];


	printf("enter email : ");
	scanf("%s",&G);


	printf("Enter password :");
	scanf(" %s",&d);

    z =	strcmp(a,G);




	x = strcmp(b,d);





	if(z==0 && x==0){

	  printf("Login successfully");	

	}
	else{

	printf("invalide! Try Again");	

	}

	return 0;
}
