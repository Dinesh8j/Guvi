#include <stdio.h>

int main() {
int i,n,a[1000],j,c=1,max=-11;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
    for(j=0;j<n-1;j++){
        while(a[j]<=a[j+1]){
            c++;
            j++;
        }
        
        if(c>max){
        max=c;
        c=1;
        
    
}

}
printf("%d",max);
	return 0;

}
