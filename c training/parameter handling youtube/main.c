#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,n;
    int sum=0;
    if(argc==1)
    {
        printf("Please provide the command line arguments");
        return 0;
    }
    for(i=1;i<argc;i++)
    {
        n = atoi(argv[i]);
        sum += n;
    }
        printf("The sum of all command line arguments: %d\n",sum);
    return 0;
}
