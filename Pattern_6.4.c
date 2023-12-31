#include <stdio.h>

int main() {
    int a,n;
    scanf("%d",&a);
    n=a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
         char ch=(char)(64+n);
        for(int k=1;k<=i;k++){
            printf("%c ",ch);
        }
        printf("
");
        n--;
    }
    
}