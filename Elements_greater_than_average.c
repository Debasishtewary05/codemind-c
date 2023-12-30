#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,sum=0,avg;
    int a[100];
    int count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum +=a[i];
        }
    avg=sum/n;
    for(i=0;i<n;i++){
        if(a[i]>=avg)
        {
            count++;
        }
    }
    printf("%d",count);
}