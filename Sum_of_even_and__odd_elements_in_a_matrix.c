#include<stdio.h>
int main(){
    int n,m,i,j;
    int a[20][20];
    int esum=0,osum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]%2==0){
                esum +=a[i][j];
            }
            else{
                osum +=a[i][j];
            }
        }
    }
        printf("%d %d",esum,osum);
}