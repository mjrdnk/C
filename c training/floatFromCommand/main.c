#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//prints floating points with a comma ',' from a command line

int main(int argc, char *argv[])
{
    int i;
    if(argc>1)
    for(i=1;i<argc;i++)
        if(strchr(argv[i],',') && !isalpha(*argv[i]))
            printf("\nThere is a float!\nFloat:%s\n",argv[i]);
    else if (argc <= 1)
            puts("Give some parameters to check if there is a float");
    return 0;
}
