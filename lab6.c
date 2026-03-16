#include <stdio.h>

int zad1()
{
    printf("Zad1:\n");
    
    for(int i=1; i<101; i++)
    {
        printf("%d ",i);
    }
    
    printf("\n\n");
    return 0;
}

int zad2()
{
    printf("Zad2:\n");
    
    int n, i=0, suma=0;
    scanf("%d",&n);
    while(i++<n)
    {
        suma += i;
        printf("%d ",i);
    }
    
    printf("\n\n");
    return 0;
}

int zad3()
{
    printf("Zad3:\n");
    
    int n, sum1=0, sum2=0;
    do
    {
        scanf("%d",&n);
        sum1 += n > 0 ? n : 0;
        sum2 += n < 0 ? n : 0;
    }
    while(n != 0);
    printf("%d %d",sum1,sum2);
    
    printf("\n\n");
    return 0;
}

int zad4()
{
    printf("Zad4:\n");
    
    int a,s=1;
    scanf("%a",&a);
    for(int i=2; i<=a; i++)
    {
        s *= i;
    }
    printf("%d",s);
    
    printf("\n\n");
    return 0;
}

int zad5()
{
    printf("Zad5:\n");
    
    int n1=0,n2=1,i=0;
    printf("%d %d ",n1,n2);
    while(i++<10)
    {
        n1 += n2;
        printf("%d ",n1);
        n1 ^= n2;
        n2 ^= n1;
        n1 ^= n2;
    }
    
    printf("\n\n");
    return 0;
}

int zad6()
{
    printf("Zad6:\n");
    
    int n,w,i=1;
    scanf("%d",&n);
    while(n>=i*i)
    {
        w = i;
        i++;
    }
    printf("%d",w);
    
    printf("\n\n");
    return 0;
}

int zad7()
{
    printf("Zad7:\n");
    
    int n,w;
    scanf("%d",&n);
    for(int i=n; i*i>=n; i--)
    {
        w = i;
    }
    printf("%d",w);
    
    printf("\n\n");
    return 0;
}

int zad8()
{
    printf("Zad8:\n");
    
    int a,b,c,sum=0;
    scanf("%d%d",&a,&b);
    for(int i=0; i<8; i++)
    {
        scanf("%d",&c);
        if(b<(a+c)/2)
            sum++;
        a = b;
        b = c;
    }
    printf("%d",sum);

    printf("\n\n");
    return 0;
}

int zad9()
{
    printf("Zad9:\n");
    
    int n,a,b,c,sum=0;
    printf("n(>2)>>");
    scanf("%d",&n);
    if(n < 3) return 0;
    printf("a1>>");
    scanf("%d",&a);
    printf("a2>>");
    scanf("%d",&b);
    for(int i=0; i<n-2; i++)
    {
        printf("a%d>>",i+3);
        scanf("%d",&c);
        if(b<(a+c)/2)
            sum++;
        a = b;
        b = c;
    }
    printf("suma = %d",sum);

    printf("\n\n");
    return 0;
}

int main()
{
    // zad1();
    // zad2();
    // zad3();
    // zad4();
    // zad5();
    // zad6();
    // zad7();
    // zad8();
    zad9();
    return 0;
}