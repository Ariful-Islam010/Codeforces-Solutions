#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;

        int remainder = 180 - a;

        if (360 % remainder == 0 && 360 / remainder >= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
