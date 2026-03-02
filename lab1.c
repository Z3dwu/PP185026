#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int zad1()
{
    printf("Zad1:\n");

    int input;
    scanf("%d",&input);
    printf("%d",input);

    printf("\n\n");
    return 0;
}

int zad2()
{
    printf("Zad2:\n");

    float a,b,n;
    scanf("%f%f",&a,&b);
    n = a-b;
    if(n < 0)
        n = -n;
    printf("%f",n);

    printf("\n\n");
    return 0;
}

int zad3()
{
    printf("Zad3:\n");

    int rok;
    printf("Rok urodzenia:\n>>");
    scanf("%d",&rok);
    printf("%d",rok-1);

    printf("\n\n");
    return 0;
}

int zad4()
{
    printf("Zad4:\n");

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%f",(a+b+c)/3.0);

    printf("\n\n");
    return 0;
}

int zad5()
{
    printf("Zad5:\n");

    char a,b;
    scanf("%c%c",&a,&b);
    printf("%c %c",b,a);

    printf("\n\n");
    return 0;
}

int zad6()
{
    printf("Zad6:\n");

    float a;
    scanf("%f",&a);
    printf("%f",a * 2.0);

    printf("\n\n");
    return 0;
}

int zad7()
{
    printf("Zad7:\n");

    float a;
    scanf("%f",&a);
    printf("%f",a * 0.85);

    printf("\n\n");
    return 0;
}

int zad8()
{
    printf("Zad8:\n");

    printf("To jest cytat: \"Czesto uzywam jezyka C.\"");

    printf("\n\n");
    return 0;
}

int zad9()
{
    printf("Zad9:\n");

    printf("C:\\Program Files\\MojaAplikacja\\");

    printf("\n\n");
    return 0;
}

int zad10()
{
    printf("Zad10:\n");

    printf("Specjalne znaki: \\t (tabulacja), \\n (nowa linia), %c (procent), \\\\ (ukosnik wsteczny).",'%');

    printf("\n\n");
    return 0;
}

int zad11()
{
    printf("Zad11:\n");

    float a,b;
    scanf("%f%f",&a,&b);
    printf("%f",sqrt(a*a+b*b));

    printf("\n\n");
    return 0;
}

int zad12()
{
    printf("Zad12:\n");

    int a;
    scanf("%d",&a);
    printf("%d",abs(a));

    printf("\n\n");
    return 0;
}

int zad13()
{
    printf("Zad13:\n");

    float a;
    scanf("%f",&a);
    printf("%f",fabsf(a));

    printf("\n\n");
    return 0;
}

int zad14()
{
    printf("Zad14:\n");

    printf("0.1+0.2 = 0.3 -> %d",0.1+0.2==0.3);

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
    return 0;
}
