#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        vector<int> b(n), c(m);
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < m; i++) cin >> c[i];

        sort(c.begin(), c.end()); // Sort c[] for binary search

        int way = 0;
        for (int i = 0; i < n; i++) {
            // Use upper_bound to find number of c[j] such that c[j] <= k - b[i]
            way += upper_bound(c.begin(), c.end(), k - b[i]) - c.begin();
        }

        cout << way << endl;
    }
    return 0;
}
