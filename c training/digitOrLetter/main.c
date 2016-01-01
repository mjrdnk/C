#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int digit=0, letter=0;
    char c;
    while((c=getchar())!=EOF)
            if(isdigit(c))
                digit++;
            else if(isalpha(c))
                letter++;
    printf("digits: %d, letters: %d\n", digit, letter);
    if(digit>letter)
        puts("More digits than letters");
    else if(digit<letter)
        puts("More letters than digits");
    else puts("Same amount");


    return 0;
}
