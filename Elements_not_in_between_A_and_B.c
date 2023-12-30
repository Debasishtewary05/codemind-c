#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int flag;
    for(int i=0;i<a;i++){
            if(arr[i]<x || arr[i]>y){
            printf("%d ",arr[i]);
           flag=1;
            }
    }
    if(flag!=1){
        printf("-1");
    }
    
}