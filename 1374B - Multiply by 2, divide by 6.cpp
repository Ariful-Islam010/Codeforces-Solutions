#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int moves = 0;
        bool possible = true;

        while (n > 1) {
            // If divisible by 6, divide by 6
            if (n % 6 == 0) {
                n /= 6;
            } 
            // Else, if divisible by 3, multiply by 2
            else if (n % 3 == 0) {
                n *= 2;
            } else {
                possible = false; // Not possible to reduce to 1
                break;
            }
            moves++;
        }

        if (possible) {
            cout << moves << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
