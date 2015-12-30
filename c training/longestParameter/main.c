#include <stdio.h>
#include <stdlib.h>

#include "header.h"

//Prints out the longest parameter from the command line.

int main(int argc, char *argv[])
{
    if(argc>1)
        printf("%d", longestParameter(argc,argv));
    return 0;
}
