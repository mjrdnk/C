#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "header.h"

int main()
{
    char str[1000];

    while (fgets(str,sizeof(str)/sizeof(int),stdin) != NULL && strcmp(str, "exit"))
    {
        if (giveExpression(str));
        else
            error();
    }
    return 0;
}
