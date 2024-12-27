#include<stdio.h>
#include<string.h>
int main()
{
   long long int i,count=0;
   char a[1000] ;
   gets(a);
   for(i=0;i<strlen(a);i++)
   {
       if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
       {
        printf("YES\n");
        return 0;
       }
   }
   printf("NO\n");
   return 0;
}
