#include<iostream>
using namespace std;
int main()
{
    int t,rating;
    cin>>t;
    while(t--)
    {
        cin>>rating;
        if(1900<=rating) cout<<"Division 1\n";
        else if(1600<=rating) cout<<"Division 2\n";
        else if(1400<=rating) cout<<"Division 3\n";
        else cout<<"Division 4\n";
    }
}
