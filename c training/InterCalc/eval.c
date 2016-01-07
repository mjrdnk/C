#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

static long v1, v2;  //integer value stored
static char strv1[40], strv2[40];  //string value stored
static char op[10]; // for reading operator purposes
static char oper;  // for storing operator

int isValidExpression(const char *str)
{
    int res;
    res = sscanf(str, "%s %s %s", strv1, op, strv2);
    if (res == 3 && isValidOperator() && strToValue(strv1, &v1) && strToValue(strv2, &v2))
    {
        oper = op[0];
        return 1;
    }
    else
        return 0;
}

int isValidOperator(void)
{
    if (op[0] == '+' || op[0] == '-' || op[0] == '*' || op[0] == '/' || op[0] == '%'
        || (op[0] == '<' && op[1] == '<') || (op[0] == '>' && op[1] == '>')
            || op[0] == '&' || op[0] == '|' || op[0] == '^')
    {
        return 1;
    }
    else
        return 0;
}

int strToValue(const char *str, long *number) // checks what kind of string is input and converts it to binary if correct
{
    if (str[0] != '0' && whatBase(str, 10))
    {
        *number = strtol(str, NULL, 10);
        return 1;
    }
    else if (str[0] == '0' && tolower(str[1]) == 'x' && whatBase(str+2, 16))
    {
        *number = strtol(str+2, NULL, 16);
        return 1;
    }
    else if (str[0] == '0' && whatBase(str+1, 8))
    {
        *number = strtol(str+1, NULL, 8);
        return 1;
    }
    else if (tolower(str[0]) == 'b' && whatBase(str+1, 2))
    {
        *number = strtol(str+1, NULL, 2);
        return 1;
    }
    else
        return 0;
}

int whatBase(const char *num, int base) // checks if correct
{
    char oneOf[] = "+-0123456789ABCDEFGHIJKLMNOPQRSTUV";
    int i, k, boolean;
    if (base > 32)
        return 0;
    for (i = 0; num[i] != '\0'; ++i)
    {
        for (k = 0; k < base+2; ++k)
        {
            if (  (boolean = (tolower(num[i]) == tolower(oneOf[k])))  )
                break;
        }
        if (boolean == 0)
            return 0;
    }
    return 1;
}

long exprValue(void)
{
    if (v2 == 0 && oper == '/')
    {
        printf("Do not divide by 0.");
        return 0;
    }
    switch (oper)
    {
        case '+':
            return (v1+v2);
        case '-':
            return (v1-v2);
        case '*':
            return (v1*v2);
        case '/':
            return (v1/v2);
        case '%':
            return (v1%v2);
        case '<':
            return (v1<<v2);
        case '>':
            return (v1>>v2);
        case '&':
            return (v1&v2);
        case '|':
            return (v1|v2);
        case '^':
            return (v1^v2);
    }
    return 0;
}

void error(void)
{
    printf("expression error!\n");
}

int giveExpression(const char *str)
{
    if (isValidExpression(str))
    {
        int expr = exprValue();
        char binform[2048];
        if (expr >= 0)
        {
            itoa(expr, binform, 2);
            printf("Result: [%d,  0%o,  0x%X,  b%s]\n", expr, expr, expr, binform);
        }
        else if (expr < 0)
        {
            expr = fabs(expr);
            itoa(expr, binform, 2);
            printf("\nResult: [-%d,  0-%o,  0x-%X,  b-%s]\n", expr, expr, expr, binform);
        }
        printf("\n\n");
        return 1;
    }
    else
        return 0;
}
