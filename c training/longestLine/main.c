#include <stdio.h>
#include <string.h>

int main()
{
    int max=0;
    int len=0;
    char longest[1000];
    char newline[1000];
        while(fgets(newline,sizeof(newline)/sizeof(int),stdin)!=NULL)
            {
                len=strlen(newline);
                if(len>max)
                    {
                        max=len;
                        strcpy(longest,newline);
                    }
            }
            printf("%s\n",longest);
    return 0;
}
