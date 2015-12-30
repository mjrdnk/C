#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,c,d;
    a=b=c=d=0;
    for(i=0;i<10;i++)
        printf("%d \t%d \t%d \t%d\n", --a, b--, ++c, d++);
    return 0;
}
