#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    string s = "Timur";
    cin >> t;
    while (t--) {
        cin >> n;
        string str;
        cin >> str;

        // Sort both strings
        sort(str.begin(), str.end());
        sort(s.begin(), s.end());

        if (s == str) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
