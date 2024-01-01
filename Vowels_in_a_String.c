#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    char ch;
    int i,flag=0;
    fgets(s,100,stdin);
    scanf("%c",&ch);
    for(i=0;s[i]!=NULL;i++){
         if(s[i]==ch) {
             flag=1;
             break;
         } 
        }
        if(flag==1){
            printf("True
");
            printf("%d",i);
        }
        else{
            printf("False
");
        }
    }
