#include <stdio.h>

int main()
{
    int pkt_mat, pkt_fiz, sum;
    
    printf("Podaj liczbe punktow z matematyki (0-50):\n>>");
    scanf("%d",&pkt_mat);
    printf("Podaj liczbe punktow z fizyki (0-50):\n>>");
    scanf("%d",&pkt_fiz);
    
    sum = pkt_mat + pkt_fiz;
    
    printf("Ocena koncowa: ");
    
    if(sum < 30 || (pkt_mat < 15 || pkt_fiz < 15))
        printf("Ocena Niedostateczna");
    else if(sum >= 30 && sum <= 49)
        printf("Ocena Dostateczna");
    else if(sum >= 50 && sum <= 69)
        printf("Ocena Dobra");
    else if(sum >= 70 && sum <= 90)
        printf("Ocena Bardzo Dobra");
    else
        printf("Ocena Celująca");
}