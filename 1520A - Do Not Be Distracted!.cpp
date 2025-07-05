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
        string temp = x;

        bool found = false;
        while (temp.size() <= 300) // limit size to avoid infinite loop
        {
            if (temp.find(s) != string::npos)
            {
                found = true;
                break;
            }
            temp += temp;
            count++;
        }

        if (found)
            cout << count << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
