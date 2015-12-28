#include <stdio.h>
#include <stdlib.h>

void Sum(int a, int b){
    int sum=a+b;
    printf("Sum is equal to %d\n",sum);
}

int main()
{
    int x,y;

    printf("Please enter two numbers\n");
    printf("number 1\n");
    scanf("%d",&x);
    printf("number 2\n");
    scanf("%d",&y);
    Sum(x,y);

    return 0;
}
