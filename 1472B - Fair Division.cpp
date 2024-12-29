#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count1 = 0, count2 = 0, totalWeight = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 1)
                count1++;
            else if (a == 2)
                count2++;
            totalWeight += a;
        }

        // If total weight is odd, it's impossible to divide equally
        if (totalWeight % 2 != 0) {
            cout << "NO" << endl;
        } else {
            // Total weight is even
            int halfWeight = totalWeight / 2;

            // Check if it's possible to form `halfWeight` using `count1` and `count2`
            if (halfWeight % 2 == 0 || (count1 >= 2)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
