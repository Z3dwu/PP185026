#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int zad1()
{
    printf("Zad1:\n");
    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",(a+b)%c);

    printf("\n\n");
    return 0;
}

int zad2()
{
    printf("Zad2:\n");
    
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a*a-b*b);

    printf("\n\n");
    return 0;
}

int zad3()
{
    printf("Zad3:\n");
    
    int a,b,c;
    scanf("%d%d%d",a,b,c);
    printf("%d",a*b*c);

    printf("\n\n");
    return 0;
}

int zad4()
{
    printf("Zad4:\n");
    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%f",cbrt(abs(a*b*c)));

    printf("\n\n");
    return 0;
}

int zad5()
{
    printf("Zad5:\n");
    
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",(a+b)*(a+b));

    printf("\n\n");
    return 0;
}

int zad6()
{
    printf("Zad6:\n");
    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a*a+b*b+c*c);

    printf("\n\n");
    return 0;
}

int zad7()
{
    printf("Zad7:\n");
    
    float a,b;
    scanf("%f%f",&a,&b);
    printf("%f",floor(b/a));

    printf("\n\n");
    return 0;
}

int zad8()
{
    printf("Zad8:\n");
    
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",(a-b)*(a-b));

    printf("\n\n");
    return 0;
}

int zad9()
{
    printf("Zad9:\n");
    
    float a,b;
    scanf("%f%f",&a,&b);
    printf("%f",(a+b)/(a-b));

    printf("\n\n");
    return 0;
}

int zad10()
{
    printf("Zad10:\n");
    
    int a;
    scanf("%d",&a);
    printf("%d",a*3+3);

    printf("\n\n");
    return 0;
}

int zad11()
{
    printf("Zad11:\n");
    
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%f",(a+b+c)/3.00);

    printf("\n\n");
    return 0;
}

int zad12()
{
    printf("Zad12:\n");
    
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%f",1.00/(1.00/a)+(1.00/b)+(1.00/c));

    printf("\n\n");
    return 0;
}

int zad13()
{
    printf("Zad13:\n");
    
    float a;
    scanf("%f",&a);
    printf("%f",1+a);

    printf("\n\n");
    return 0;
}

int zad14()
{
    printf("Zad14:\n");
    
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%f",a*b*c*0.0174532925/2.00);

    printf("\n\n");
    return 0;
}

int zad15()
{
    printf("Zad15:\n");
    
    float a;
    scanf("%f",&a);
    printf("%f",1+a/3.00);

    printf("\n\n");
    return 0;
}

int main()
{
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
    zad6();
    zad7();
    zad8();
    zad9();
    zad10();
    zad11();
    zad12();
    zad13();
    zad14();
    zad15();
    return 0;
}