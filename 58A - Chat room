#include<stdio.h>
#include<string.h>
int main(){
int i,count=0;
char s[1000];
gets(s);
int d=strlen(s);
for(i=0;i<d;i++)
    {
    if(s[i]=='h'&&count==0) count++;
    else if(s[i]=='e'&&count==1) count++;
    else if(s[i]=='l'&&count==2) count++;
    else if(s[i]=='l'&&count==3) count++;
    else if(s[i]=='o'&&count==4) count++;
    }
    if(count==5) printf("YES\n");
    else printf("NO\n");
    return 0;
}

