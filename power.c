#include<stdio.h>
#include<conio.h>
void main()
{
int base ,expontent;
long  result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result=result* base;
        --exponent;
    }

    printf("Answer = %d", result);
}
