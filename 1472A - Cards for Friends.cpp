#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;

        long long total_pieces = 1;

        while (w % 2 == 0) {
            w /= 2;
            total_pieces *= 2;
        }

        while (h % 2 == 0) {
            h /= 2;
            total_pieces *= 2;
        }

        if (total_pieces >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
