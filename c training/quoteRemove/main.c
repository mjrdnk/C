#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[300];
    char quote='"';
    char space=' ';
    int c;

    for(c=0;c<sizeof(input);c++)
        input[c]=0;

    while(fgets(input,sizeof(input)/sizeof(int),stdin)!=NULL)
    {
        for(c=0;c<sizeof(input);c++)
            if(input[c]==quote)
                input[c]=space;
    }
    puts(input);
    return 0;
}
