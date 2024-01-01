#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    fflush(stdin);
    for (int testCase = 1; testCase <= n; testCase++)
    {
        char s[100];
        scanf("%s", s);

        int Digit = 0; 
        for (int i = 0; s[i] != NULL; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
        Digit = 1; 
                break;             
            }
        }

        if (Digit)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }

    return 0;
}