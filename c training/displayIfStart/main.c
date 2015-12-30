#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//if (line starts with a parameter string)
//  print this line

int main(int argc, char *argv[])
{
    char line[200];
    int i;
    char *string=argv[1];

    for(i=0;i<sizeof(line)/sizeof(int);i++)
        line[i]=0;

    if(argc>1)
    while(fgets(line, sizeof(line)/sizeof(int),stdin)!=NULL)
        for(i=0;i<sizeof(string)/sizeof(int);i++)
            if(line[i]==string[i])
            //if(strstr(line,string)!=NULL) <<this if one would be instead of for and if above and it checked if the string occures anytime in line
                puts(line);
    return 0;
}
