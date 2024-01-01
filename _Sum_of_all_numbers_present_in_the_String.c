#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,sum=0;
    fgets(str, 100, stdin);
    for (i = 0; str[i] != NULL; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum +=(str[i]-'0');
        }
    }
   // puts(str);
    printf("%d",sum);
}