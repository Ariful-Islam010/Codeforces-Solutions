#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n; // Kirito's initial strength and number of dragons

    // Arrays to store dragons' strength and bonus
    int strength[1000], bonus[1000];

    // Input each dragon's strength and bonus
    for (int i = 0; i < n; i++) {
        cin >> strength[i] >> bonus[i];
    }

    // Sort dragons by strength using a simple array of indices
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strength[j] > strength[j + 1]) {
                // Swap both strength and bonus
                swap(strength[j], strength[j + 1]);
                swap(bonus[j], bonus[j + 1]);
            }
        }
    }

    // Fight each dragon
    for (int i = 0; i < n; i++) {
        if (s > strength[i]) {
            s += bonus[i]; // Gain bonus if Kirito wins
        } else {
            cout << "NO" << endl; // Kirito loses
            return 0;
        }
    }

    // If all dragons are defeated
    cout << "YES" << endl;
    return 0;
}
