#include<iostream>
using namespace std;

int main() {
    long long t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        // If n is odd, it definitely has an odd divisor greater than 1
        if (n % 2 != 0) {
            cout << "YES" << endl;
        }
        else {
            // If n is a power of 2, there is no odd divisor greater than 1(ex-n=2,8,16,32)
            if ((n & (n - 1)) == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
