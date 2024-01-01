#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    fgets(str, 100, stdin);
    for (i = 0; str[i] != NULL; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
   // puts(str);
    printf("%s",str);
}