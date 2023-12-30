#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,flag=0;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            if(i%2==0){
                  flag++;
                
               
            }
            else
            {
                printf("False
");
                exit(0);
            }
        }
    }
    if(flag>0){
        printf("True");
    }
    
}