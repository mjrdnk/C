#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//printf the line from stdin if more letters than digits

int main()
{
    char line[1000];
    int letter=0, digit=0, i;
    for(i=0;i<sizeof(line)/sizeof(int);i++)
        line[i]=0;
    while(fgets(line,sizeof(line)/sizeof(int),stdin)!=NULL)
        ;   //this ; is not a mistake
        for(i=0;i<sizeof(line)/sizeof(int);i++)
        {
            if(isalpha(line[i]))
                letter++;
            else if (isdigit(line[i]))
                digit++;
        }
        if(letter>digit)
            puts(line);

    return 0;
}
