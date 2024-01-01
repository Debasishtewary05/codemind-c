#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len=0;
    fgets(str, 100, stdin);
   // len=strlen(str);
   for(i=1;str[i]!=NULL;i++){
       len++;
   }
    for (i = 0,j=len-1; i<len/2 ; i++,j--)
    {
        char temp =str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    //puts(str);
   printf("%s",str);
}