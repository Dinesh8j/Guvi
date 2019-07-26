#include <stdio.h>

int main() {
	
	int n,m,a[1000][1000],i,j,r[1000]={0},c[1000]={0};
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	        scanf("%d",&a[i][j]);
	    }
	}
		for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	       
	       if(a[i][j]==0){
	           r[i]=1;
	           c[j]=1;
	       }
	        
	    }
	}
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	        if(r[i]==1||c[j]==1){
	            printf("0 ");
	        }
	        else
	        printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
