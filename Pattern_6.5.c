#include<stdio.h>
int main(){
    int n,i,j,k;
    char ch='A';
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        //ch='A';
        for(k=0;k<n-i;k++){
            printf("%c ",ch);
        }
        printf("
");
        ch++;
    }
}