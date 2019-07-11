#include<stdio.h>
int main(){
    int n,i,a[1000],f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==i){
            printf("%d ",i);
            f=1;
        }
    }
    if(f==0)
    printf("-1");
    }
