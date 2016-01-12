#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//1. Prints out the shortest and the longest parameter from the command line
/*int main(int argc, char *argv[])
{

    int i,shortest=1,longest=1;
    for(i=1;i<argc; i++)
    {
        if(strlen(argv[i])<strlen(argv[shortest]))
            shortest=i;
        if(strlen(argv[i])>strlen(argv[longest]))
            longest=i;
    }
        printf("Shortest: %s\n", argv[shortest]);
        printf("Longest: %s\n", argv[longest]);

    return 0;
}


//2. Prints out parameter from the command line which is first, third, 5th and so on
int main(int argc, char *argv[])
{
    int i;
    for(i=1;i<argc;i++)
        if(i%2==1)
        puts(argv[i]);
    return 0;
}


//3. Prints out all of the parameters with odd lenght

int main(int argc, char *argv[])
{
    int i=0;
    for(i=1;i<argc;i++)
    {
        int a = strlen(argv[i]);
        if(a%2==1)
        puts(argv[i]);
    }

    return 0;
}
*/

//4. Printa the average of all numerical parameters from the command line. Non-numerical parameters are to be ignored.

int StrNumeric (char *str)
int main(int argc, char *argv[])
{
    int i;
    for(i=1;i<argc;i++)
    {

    }

    return 0;
}
