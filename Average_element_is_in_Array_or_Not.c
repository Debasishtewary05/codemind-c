#include<stdio.h>
int main(){
    int n,i,sum=0,avg,flag=0;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum +=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
    if(avg==a[i]){
        flag=1;
    }
    }
    if(flag==1){
        printf("True
");
    }
    else
    {
        printf("False
");
    }
}