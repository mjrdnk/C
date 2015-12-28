#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int step = 20;
    float fahr = 0;
    int max = 300;

    printf("fahrenheit\t\tcelsius\n");
    for(fahr=0;fahr<=max;fahr+=step)
    {
        printf("\t%3.0f\t\t%6.2f\n", fahr, fahrToCelsius(fahr) );
    }
    return 0;
}
