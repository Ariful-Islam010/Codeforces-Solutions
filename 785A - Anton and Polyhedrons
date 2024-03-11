#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,faces=0;
    scanf("%d",&n);
    char ch[1000];
    for(i=0;i<n;i++)
    {
        scanf(" %s",ch);
        if(strcmp(ch,"Icosahedron")==0) faces+=20;
        else if(strcmp(ch,"Cube")==0) faces+=6;
        else if(strcmp(ch,"Tetrahedron")==0) faces+=4;
        else if(strcmp(ch,"Dodecahedron")==0) faces+=12;
        else if(strcmp(ch,"Octahedron")==0) faces+=8;
    }
    printf("%d\n",faces);
    return 0;
}
