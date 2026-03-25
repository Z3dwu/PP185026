#include <stdio.h>

int reszta(int a, int b)
{
    return (a % 10) > (b % 10);
}

int main()
{
    printf("%d",reszta(14,5));
    return 0;
}
