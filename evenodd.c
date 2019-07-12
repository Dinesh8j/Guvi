#include<stdio.h>
int main(){
    int n,i,j,a[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
     if(i%2&&a[i]%2)
     printf("%d ",a[i]);
     if(i%2==0&&a[i]%2==0)
     printf("%d ",a[i]);
       }
       
    }
