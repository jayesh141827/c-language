#include<stdio.h>
int main(){

	int n , rm , o , Re=0 ;

	printf("Enter number = ");
    scanf("%d", &n);

    o = n ;

    while(n != 0){

    	rm = n % 10;
    	Re = Re * 10 + rm;
    	n /= 10;

	}

	if(o == Re)


	printf("%d is plindrome ",o);
	else
	printf("%d is not plindrome ",o


	);







	return 0;
}
