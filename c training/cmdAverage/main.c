#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Prints the average of all numerical parameters from the command line.

int main(int argc, char *argv[])
{
    int i=0;
    float average=0, numbers=0, sum=0, amount=0;
    if(argc>1)
    for(i=1;i<argc;i++)
    {
        if(isdigit(*argv[i]))           //iff argv is a number, otherwise garbage
        {
            numbers=atoi(argv[i]);
            amount++;
            sum+=numbers;
        }
    }

    average=sum /(amount);
    printf("%.2f", average);
    return 0;
}
