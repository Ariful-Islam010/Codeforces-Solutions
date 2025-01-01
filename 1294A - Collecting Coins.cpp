#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t, a, b, c, n;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> n;
        int maximum = max(a, max(b, c));
        int requiredCandies = (maximum - a) + (maximum - b) + (maximum - c);
        
        if (n >= requiredCandies && (n - requiredCandies) % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
