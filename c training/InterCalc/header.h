#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

int isValidExpression(const char *str);
int isValidOperator(void);
int strToValue(const char *str, long *number);
int whatBase(const char *num, int base);
long exprValue(void);
void error(void);
int giveExpression(const char *str);
void error(void);

#endif // HEADER_H_INCLUDED

