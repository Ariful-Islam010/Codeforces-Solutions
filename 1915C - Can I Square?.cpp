#include <iostream>
#include <cmath> // For sqrt
using namespace std;

int main() {
    int t, n, a;
    long long sum;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        while (n--) {
            cin >> a;
            sum += a;
        }
        long long root = sqrt(sum);
        if (root * root == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}