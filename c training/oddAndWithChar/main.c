#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    for(i=0;i<argc;i++)
    if((strlen(argv[i]))%2!=0 && strchr(*argv,'x')!=NULL)
        puts(argv[i]);
    return 0;
}
