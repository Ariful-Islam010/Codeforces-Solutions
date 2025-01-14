#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 5; ++i) {
            if (a > b) swap(a, b);
            if (a > c) swap(a, c);
            if (b > c) swap(b, c);
            ++a;
        }
        cout << a * b * c << '\n';
    }
}
