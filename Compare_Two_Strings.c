#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int i,flag=1;
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    for(i=0;a[i]!=NULL||b[i]!=NULL;i++){
    if(a[i]!=b[i]){
        flag=0;
}
}
if(flag==1){
printf("Strings are Equal
");
    }
    else{
        printf("Strings are not Equal
");
    }
}

