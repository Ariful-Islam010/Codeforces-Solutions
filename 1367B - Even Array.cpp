#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        int oddMismatch = 0, evenMismatch = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0 && arr[i] % 2 != 0) 
                evenMismatch++; // Mismatch at even index
            if (i % 2 != 0 && arr[i] % 2 == 0) 
                oddMismatch++;  // Mismatch at odd index
        }

        if (oddMismatch == evenMismatch) 
            cout << oddMismatch << endl; // Number of swaps required
        else 
            cout << -1 << endl; // Not possible to make array good
    }
    return 0;
}
