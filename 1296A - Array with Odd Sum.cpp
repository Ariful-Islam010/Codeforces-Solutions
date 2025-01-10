#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll t, n, a, countOdd, countEven;
    cin >> t;
    while(t--) {
        cin >> n;
        countOdd = 0;
        countEven = 0;
        
        while(n--) {
            cin >> a;
            if(a % 2 == 1) {
                countOdd++;
            } else {
                countEven++;
            }
        }

        if (countOdd > 0 && (countEven > 0 || countOdd % 2 == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
