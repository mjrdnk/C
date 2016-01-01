#include <stdio.h>
#include <stdlib.h>

//6. Reads all lines from standard input and counts all lines containing at least n a's where n is a command line parameter.

int main(int argc, char *argv[])
{
    char anyLine[1000];
    //char letter='a';
    int occur=0, i=0, n=0;
    if(argc==2){
    n=atoi(argv[1]);
    while(fgets(anyLine, sizeof(anyLine)/sizeof(int),stdin)!=NULL)
        for(i=0;i<sizeof(anyLine)/sizeof(int);++i)
        if(anyLine[i]=='a')
            occur++;

    printf("%d %d",occur, n);
    }
    return 0;
}
