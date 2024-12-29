#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t, n;
    vector<int> a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == 1) {
            a.push_back(i + 1);
        } else if (n == 2) {
            b.push_back(i + 1);
        } else if (n == 3) {
            c.push_back(i + 1);
        }
    }
    int w = min({(int)a.size(), (int)b.size(), (int)c.size()});
    cout << w << endl;
    for (int i = 0; i < w; i++) {
     cout << a[i] << " " << b[i] << " " << c[i] << endl;
     }
    return 0;
}
