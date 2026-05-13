#include <stdio.h>
#include <stdlib.h>

int f(int n, int m, int**tab)
{
    int suma = 0;

    for(int i=0; i<n; i++)
    {
    for(int j=0; j<m; j++)
    {
        if(tab[i][j] % 2)
            suma += tab[i][j];
    }}

    return suma;
}

int main()
{
    int n = 2;
    int m = 3;

    int ** tab = (int **)malloc(n * sizeof(int *));

    for(int i=0; i<n; i++)
    {
        tab[i] = (int *)malloc(m * sizeof(int));
    }

    tab[0][0] = 1, tab[0][1] = 5, tab[0][2] = 4;
    tab[1][0] = 8, tab[1][1] = 0, tab[1][2] = 9;
    printf("%d",f(n,m,tab));
}
