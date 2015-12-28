#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;

    for(i=0;i<10;++i)
        printf("%d \t%3.0f \t%6.0f\n", i, pow(2,i), pow(-3,i));
    return 0;
}
