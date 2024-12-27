#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
      cin>>n;
      int arr[n];
      for(i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      int maximum=*max_element(arr,arr+n);
      int minimum=*min_element(arr,arr+n);
      int result=maximum-minimum;
      cout<<result<<endl;
    }
    return 0;
}
