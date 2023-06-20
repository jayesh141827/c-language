#include <stdio.h>
int main()
{
    int n, sum=0, f, l;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);

    l = n % 10;

    while(n>=10){

    	n=n/10;



	}
    f=n;

    sum = f + l;
    printf("sum = %d",sum);

    return 0;

