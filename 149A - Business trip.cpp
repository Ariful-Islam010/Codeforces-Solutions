#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, i, month[12];
    cin >> k;

    for (i = 0; i < 12; i++) {
        cin >> month[i];
    }

    // If no growth is required, print 0 immediately
    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(month, month + 12, greater<int>());

    int sum = 0;
    for (i = 0; i < 12; i++) {
        sum += month[i];
        if (sum >= k) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
