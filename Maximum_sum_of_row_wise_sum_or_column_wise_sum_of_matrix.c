#include<stdio.h>
int main(){
    int n,m,i,j;
    
    scanf("%d%d",&n,&m);
    int a[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int rmax=0;
    for(i=0;i<n;i++)
    {
     int rsum=0;
     for(j=0;j<m;j++)
     {
         rsum +=a[i][j];
        if(rmax<rsum)
        {
            rmax=rsum;
        }
     }
    }
         
         int cmax=0;
         for(i=0;i<m;i++)
         {
     int csum=0;
     for(j=0;j<n;j++)
     {
         csum +=a[j][i];
         if(cmax<csum){
             cmax=csum;
         }
     }
    }
   if(rmax>cmax){
    printf("%d",rmax);
   }
   else
   {
       printf("%d",cmax);
   }
}