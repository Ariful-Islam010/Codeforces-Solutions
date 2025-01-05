#include <iostream>
using namespace std;

int main() {
    int t, n, i;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;

        int firstB = -1, lastB = -1;
        for (i = 0; i < s.length(); i++) {
            if (s[i] == 'B') {
                if (firstB == -1) {
                    firstB = i;
                }
                lastB = i;
            }
        }

        if (firstB == -1) {
            cout << 0 << endl;
        } else {
            cout << lastB - firstB + 1 << endl;
        }
    }
    return 0;
}
