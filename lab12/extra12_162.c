#include <stdio.h>

void clampVal(int *p_war, const int *p_dolny, const int *p_gorny)
{
    if(*p_war < *p_dolny)
        *p_war = *p_dolny;
    else if(*p_war > *p_gorny)
        *p_war = *p_gorny;
}

int main()
{
    int wartosc = 250;
    const int najm = 0;
    const int najw = 100;

    printf("Przed: %d\n",wartosc);

    clampVal(&wartosc,&najm,&najw);

    printf("Po: %d",wartosc);

    return 0;
}
