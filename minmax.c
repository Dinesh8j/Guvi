#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,n,a[1000],min=1000,m1,m2;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(abs(a[i]+a[j])<min){
        min=abs(a[i]+a[j]);
        m1=a[i];
        m2=a[j];
    }
    }
}
printf("%d %d",m1,m2);
}
