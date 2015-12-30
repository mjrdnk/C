#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Replaces each line with a number that gives the number
//of occurrences of the first command line parameter.

int main(int argc, char *argv[])
{
    char line[200];
    int i, occur=0;
    char *parameter=argv[1];

    for(i=0;i<sizeof(line)/sizeof(int);i++)
        line[i]=0;

    if(argc==2)
        while(fgets(line,sizeof(line)/sizeof(int),stdin)!=NULL)
            if(strstr(line,parameter)!=NULL)
                occur++;
    printf("%s occurred %d",parameter,occur);
    return 0;
}
