#include <stdio.h>
#include<stdio.h>
int main() {
    int a,n;
    scanf("%d",&a);
    n=a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
         
        for(int k=n;k<=a;k++){
            printf("%d ",k);
        }
        printf("
");
        n--;
        
    }
    
}