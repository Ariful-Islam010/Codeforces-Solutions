#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n; // Length of the string
        cin >> n;
        string s;
        cin >> s;

        int l = 0, r = n - 1; // Pointers to the start and end of the string
        while (l < r) {
            if ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0')) {
                // Remove complementary pair
                l++;
                r--;
            } else {
                // Stop when pairs are no longer complementary
                break;
            }
        }

        // Remaining length of the string
        cout << (r - l + 1) << endl;
    }
    return 0;
}
