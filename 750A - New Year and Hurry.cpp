#include<stdio.h>
int main()
{
    int problem,minit,i;
    scanf("%d %d",&problem,&minit);
    if(minit>235)
    {
    printf("0\n");
    return 0;
    }
    minit=240-minit;
    for(i=1;i<=problem;i++)
    {
      minit-=5*i;
      if(minit<(5*(i+1)))
      {
      printf("%d\n",i);
      return 0;
      }
    }
    printf("%d\n",problem);
    return 0;
}
