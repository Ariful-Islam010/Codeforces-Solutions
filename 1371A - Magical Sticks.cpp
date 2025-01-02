#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        long long n; // Number of sticks
        cin >> n;

        // Calculate the maximum number of sticks with the same length
        cout << (n + 1) / 2 << endl;
    }

    return 0;
}