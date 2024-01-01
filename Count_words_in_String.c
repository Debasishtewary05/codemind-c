#include <stdio.h>
#include <string.h>
int main()
{
    int i, flag = 0, count = 0;
    char s[100];
    fgets(s, 100, stdin);
    for (i = 0; s[i] != NULL; i++)
    {
        if (s[i] == ' ' || s[i] == '	' || s[i] == '
')
        {
            flag = 0;
        }
        else if (flag == 0)
        {
            flag = 1;
            count++;
        }
    }
    printf("%d", count);
}