#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Wprowadz dodatnia liczbe calkowita n:\n>>");
    scanf("%d",&n);
    
    for(int i=1; i<n*4; i+=2)
    {
        sum += i;
    }
    printf("Suma: %d",sum);

    return 0;
}