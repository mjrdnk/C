#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int max=0;
    int len=0, i;
    char longest[1000];
        for(i=1;i<argc;++i)
            {
                len=strlen(argv[i]);
                if(len>max)
                    {
                        max=len;
                        strcpy(longest,argv[i]);
                    }
            }
            printf("%s\n",longest);
    return 0;
}

