#include <stdio.h>
#include <stdlib.h>

//filter selects lines with the same letter at the beginning and end of the line
//filter is not case sensitive

int main()
{
    char line[1000];
    int i;
    for(i=0; sizeof(line)/sizeof(int); i++)
        line[i]=0;
    while(fgets(line,sizeof(line)/sizeof(int),stdin)!=NULL)
    {
        if(line[0]==line[2])
            puts(line);
    }
    return 0;
}
