#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,n,a[1000],min=1000,m1,m2,k;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]<a[j]){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    }
}
printf("%d",a[k-1]);
}
