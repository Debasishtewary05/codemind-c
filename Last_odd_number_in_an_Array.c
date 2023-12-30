#include<stdio.h>
int main(){
    int i,n;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            k=a[i];
        }
    }
    printf("%d",k);
}