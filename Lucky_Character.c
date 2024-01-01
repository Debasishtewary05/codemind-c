#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    fgets(s,10,stdin);
    printf("%c",s[6]);
}