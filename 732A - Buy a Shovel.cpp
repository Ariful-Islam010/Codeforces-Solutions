#include <iostream>
using namespace std;
int main()
   {
    int k,r,i;
    cin>>k>>r;
    for (i = 1;; i++)
    {
      int cost= k*i;
      if (cost%10==0 || cost%10==r)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
