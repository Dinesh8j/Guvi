#include <stdio.h> 
#include <string.h> 
#include<string.h>
int main() 
{ 
int i,j,n,a[1000],left=0,right,found=0;
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
    left=left+a[i];
    right=0;
    for(j=i+1;j<n;j++){
        right=right+a[j];
    }
        if(left*(n-i-1)==right*(i+1)){
            found=1;
    }
}
if(found==0)
printf("no");
else
printf("yes");

	return 0; 
} 
