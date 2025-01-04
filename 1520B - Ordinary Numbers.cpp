#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int count = 0;
        for (int digit = 1; digit <= 9; ++digit) {
            long long ordinary = digit;
            while (ordinary <= n) {
                ++count;
                ordinary = ordinary * 10 + digit; // Generate next ordinary number
            }
        }

        cout << count << endl;
    }

    return 0;
}
