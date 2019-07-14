#include<stdio.h>
#include<string.h>
void printstring(char* s){
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]!='.')
        printf("%c",s[i]);
    }
    printf(" ");
}
void rev(char* s){
    int len=strlen(s);
    for(int i=len-1;i>=0;i--){
        if(s[i]!='.')
        printf("%c",s[i]);
    }
    printf(" ");
}
int main(){
    int i=0;
char s[1000];
while(scanf("%s",s)>0){
   
    if(i%2==0){
        rev(s);
    }
    else{
       printstring(s);
    }
    i++;
}
       
    
}
