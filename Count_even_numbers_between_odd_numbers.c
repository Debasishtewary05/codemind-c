#include<stdio.h>
int main(){
    int n,i,count=0;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i-1]%2!=0&&a[i+1]%2!=0){
                count++;
            }
        }
    }
    printf("%d",count);
}