#include <stdio.h>

int main() {
int i,n,a[1000],j;
scanf("%d",&n);
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
if(a[0]!=0){
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
}
else
printf("0");
	return 0;
}
