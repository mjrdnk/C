#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char line[1000];
    int i, occur=0;
    for(i=0;i<sizeof(line)/sizeof(int);i++)
        line[i]=0;
    if(argc==3)
    while(fgets(line,sizeof(line)/sizeof(int),stdin)!=NULL){
        for(i=0;i<sizeof(line)/sizeof(int);i++)
            if(strchr(line,*argv[2]))
                occur++;
            else return 0;
        if(occur>=atoi(argv[1]))
            puts(line);
        else return 0;
    }
    return 0;
}
