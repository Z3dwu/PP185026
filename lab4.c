#include <stdio.h>

int zad1()
{
    printf("Zad1:\n");
    
    int a,b;
    scanf("%d%d",&a,&b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d\n%d",a,b);

    printf("\n\n");
    return 0;
}

int zad2()
{
    printf("Zad2:\n");
    
    int a;
    scanf("%d",&a);
    if(a & 1)
        printf("nieparzysta");
    else
        printf("parzysta");

    printf("\n\n");
    return 0;
}

int zad3()
{
    printf("Zad3:\n");
    
    int a, b;
    scanf("%d%d",&a,&b);
    printf("%d",(a >> b) & 1);

    printf("\n\n");
    return 0;
}

int zad4()
{
    printf("Zad4:\n");
    
    int a, b;
    scanf("%d%d",&a,&b);
    a &= ~(1 << b);
    printf("%d",a);

    printf("\n\n");
    return 0;
}

int zad5()
{
    printf("Zad5:\n");
    
    int a;
    scanf("%d",&a);
    printf("%d",~a);

    printf("\n\n");
    return 0;
}

int main()
{
    // zad1();
    // zad2();
    // zad3();
    // zad4();
    zad5();
    return 0;
}