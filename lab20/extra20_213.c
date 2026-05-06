#include <stdio.h>

void removeHash(char *input)
{
    char *read = input;
    char *save = input;

    while(*read != '\0')
    {
        if(*read != '#')
        {
            *save = *read;
            save++;
        }
        read++;
    }
    *save = '\0';
}

int main()
{
    char text[] = "test#test test###test";
    printf("%s\n\n",text);
    removeHash(text);
    printf("%s\n",text);
}
