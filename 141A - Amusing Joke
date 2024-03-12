#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char l1[1000],l2[1000],l3[1000];
    scanf("%s\n %s\n %s",&l1,&l2,&l3);
    strcat(l1,l2);
    int d=strlen(l1);
    for(i=0;i<d;i++)
    {
        for(j=i+1;j<d;j++)
        {
            if(l1[i]>l1[j])
            {
                char temp;
                temp=l1[i];
                l1[i]=l1[j];
                l1[j]=temp;
            }
        }
    }
    for(i=0;i<d;i++)
    {
        for(j=i+1;j<d;j++)
        {
            if(l3[i]>l3[j])
            {
                char temp;
                temp=l3[i];
                l3[i]=l3[j];
                l3[j]=temp;
            }
        }
    }
    if(strcmp(l1,l3)==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
