#include<stdio.h>
int main(){
 int i,j,r,c,a[20][20];
 scanf("%d%d",&r,&c);
 for(i=0;i<r;i++){
     for(j=0;j<c;j++){
         scanf("%d",&a[i][j]);
     }
 }
 int sum=0;
 for(i=0;i<r;i++){
     for(j=0;j<c;j++){
         sum +=a[i][j];
     }
    
}
printf("%d ",sum); 
}