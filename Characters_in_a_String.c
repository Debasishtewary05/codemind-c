#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,sum=0;
    fgets(str, 100, stdin);
    for (i = 1; str[i] != NULL; i++)
    {
            sum ++;
      
    }
    printf("%d",sum);
}