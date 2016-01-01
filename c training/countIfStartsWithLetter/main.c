#include <stdio.h>
#include <stdlib.h>

int main()
{
    char anyLine[1000];
    char letter='a';
    int occur=0;
    while(fgets(anyLine, sizeof(anyLine)/sizeof(int),stdin)!=NULL)
        if(anyLine[0]==letter)
            occur++;
    printf("%d",occur);
    return 0;
}
