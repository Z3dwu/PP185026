#include <stdio.h>

int f(int a[], int s)
{
    int sum = 0;
    for(int i=0; i<s; i+=2)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {5,2,8,5,4};
    printf("%d",f(arr,5));
    return 0;
}
