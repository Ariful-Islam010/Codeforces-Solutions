#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int ones_count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            ones_count++;
        }
    }

    int max_gain = INT_MIN;

    for (int i = 0; i < n; i++) {
        int gain = 0;
        for (int j = i; j < n; j++) {
            if (a[j] == 0) {
                gain++;
            } else {
                gain--;
            }
            max_gain = max(max_gain, gain);
        }
    }

    if (ones_count == n) {
        cout << n - 1 << endl;
    } else {
        cout << ones_count + max_gain << endl;
    }

    return 0;
}
