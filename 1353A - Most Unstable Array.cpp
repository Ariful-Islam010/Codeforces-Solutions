#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        long long n, m; // Length of the array and sum of elements
        cin >> n >> m;

        if (n == 1) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << m << endl;
        } else {
            cout << 2 * m << endl;
        }
    }

    return 0;
}
