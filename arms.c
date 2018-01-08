#include <stdio.h>
int main()
{
    int n, on, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    on = n;

    while (on != 0)
    {
        remainder = on%10;
        result += remainder*remainder*remainder;
        on /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
