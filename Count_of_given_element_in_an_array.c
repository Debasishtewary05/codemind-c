#include<stdio.h>
int main(){
    int i,n,z,count=0;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++){
        if(z==a[i]){
            count++;
        }
    }
    printf("%d",count);
}