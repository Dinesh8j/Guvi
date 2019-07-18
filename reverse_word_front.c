#include <stdio.h>
#include<string.h>
int main() {
	int len,i,j,c=0;
	char str[1000],sub[1000];
	fgets(str,1000,stdin);
	//printf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++){
	    if(str[i]==32){
	        str[i]=35;
	        for(j=c-1;j>=0;j--){
	            printf("%c",sub[j]);
	        }
	        printf(" ");
	        c=0;
	    }
	    else{
	        sub[c++]=str[i];
	    }
	}
	for(i=len-1;str[i]!=35;i--)
	printf("%c",str[i]);
	return 0;
}
