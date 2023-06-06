#include <stdio.h>
main(){
    int a, b, c, d, vlog;
    printf("\n Enter value to a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >b)
    {
        if(a>c)
        {
            if(a>d)
            vlog = a;
            else
            vlog=d;
        }
        else
           {
           if(c>d)
            vlog = c;
            else
            vlog = d;
        }
        else
            if(b>c)
            {
                if(b>d)
                vlog = b;
                else
                vlog = d;
            }
    }
    printf("\n The biggest number is %d", vlog);
    return 0;
}
