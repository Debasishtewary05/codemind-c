#include<stdio.h>
int main(){
    int n,i,osum=0,esum=0;
    int a[100];
    int diff;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            esum +=a[i];
        }
        else{
            osum +=a[i];
        }
    }
    if(esum>osum){
        diff=esum-osum;
    }
    else{
        diff=osum-esum;
    }
    printf("%d",diff);
}