#include <iostream>
using namespace std;

int main() {
    long long n, x, count = 0;
    cin >> n >> x;

    for (long long i = 1; i <= n; i++)
        if (x % i == 0 && x / i <= n)
            count++;

    cout << count;
    return 0;
}
