#include <stdio.h>

int zad1()
{
    int a,b,c;
    scanf("%d%d%d",a,b,c);
    printf("%f",(a+b)%c);
}

int main()
{
    zad1();
    return 0;
}