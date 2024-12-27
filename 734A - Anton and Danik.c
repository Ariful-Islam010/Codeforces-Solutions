#include<stdio.h>
int main()
{    long long int n;
    int i,count=0,sum=0;
    char ch[100006];
    scanf("%lld",&n);
    scanf("%s", ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]=='A') count++;
        else if(ch[i]=='D') sum++;
    }
    if(count>sum) printf("Anton\n");
    else if(count<sum) printf("Danik\n");
    else if(count==sum) printf("Friendship\n");
    return 0;
}
