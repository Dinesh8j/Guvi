// You are using GCC
#include<stdio.h>
int main(){
    int i,j,n,sum=0,a[1000][1000];
    float avg=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    avg=(float)sum/(n*n);
    printf("%f",avg);
}
