#include<stdio.h>
int main()
{
    int a[3],i,j;
    //User Input three value
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    //Sorting assending order
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //a[0]=max value,a[2]=min value
    printf("%d\n",a[0]-a[2]);
    return 0;
}
