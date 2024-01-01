#include<stdio.h>
#include<math.h>
int main(){
    int i,a,b;
    float sum =0;
    scanf("%d  %d",&a,&b);
    for(i=a;i<=b;i++){
       sum +=(float)(sqrt(i));
    }
    printf("%.2f",sum);
}