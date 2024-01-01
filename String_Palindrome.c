#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int len = 0;
    while (s[len] != NULL)
    {
        len++;
    }

    
    int p = 1; 

    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            p = 0; 
            break;
        }
    }

    if (p)
    {
        printf("Palindrome
");
    }
    else
    {
        printf("Not Palindrome
");
    }

    return 0;
}