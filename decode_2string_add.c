#include <stdio.h>
#include<string.h>
int main()
{
 char s1[1000],s2[1000];
 scanf("%s%s",s1,s2);
 // printf("%s\n%s\n",s1,s2);
 int l1=strlen(s1);
 for(int i=0;i<l1;i++){
     int sol=((s1[i]-96)+(s2[i]-96))%26+96;
     printf("%c",sol);
 }
  return 0;
}
