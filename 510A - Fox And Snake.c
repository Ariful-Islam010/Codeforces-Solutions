#include<stdio.h>
int main()
{
    int i,j,row,starnumber,count=0;
    scanf("%d %d",&row,&starnumber);
    for(i=1;i<=row;i++)
    {
      if(i%2!=0)
      {
      for(j=1;j<=starnumber;j++)
      {
      printf("#");
      }
      printf("\n");
      }
      else if(i%2==0)
      {
        count++;
        if(count%2!=0)
        {
        for(j=1;j<=starnumber;j++)
        {
            if(j==starnumber) printf("#");
            else printf(".");
        }
        printf("\n");
        }
         else if(count%2==0)
        {
        for(j=1;j<=starnumber;j++)
        {
            if(j==1) printf("#");
            else printf(".");
        }
        printf("\n");
        }
    }
    }
    return 0;
}
