#include<iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;

    int d = -1;
    int maximum = 0, count = 0;

    while (n--) {
        cin >> a;
        if (a > d) {
            count++;
            d = a;
            maximum = max(maximum, count);
        } else {
            count = 1;
            d = a;
        }
    }

    cout << maximum << endl;
    return 0;
}
