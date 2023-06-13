#include <stdio.h>

int main()
{
    int i, b;

    
    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &b);

    i=1;
    
    while(i<=b)
    
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
