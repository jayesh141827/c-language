#include <stdio.h>

int main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter any number ");
    scanf("%d", &n);
  
    lastDigit = n % 10;
   
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
   
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
