#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include "header.h"

int longestParameter(int argc, char *argv[])
{
    int max=INT_MAX, longest=0;

    if(strlen(*argv)<max)
    {
        longest=strlen(*argv);
        return longest;
    }
    return 0;
}
