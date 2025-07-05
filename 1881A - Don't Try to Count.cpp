#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int count = 0;

        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            if (x.find(s)!= -1)
            {
                found = true;
                break;
            }
            x+=x;
            count++;
        }

        if (found)
            cout << count << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
