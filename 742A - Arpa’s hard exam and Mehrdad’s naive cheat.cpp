#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int cycle[] = {8, 4, 2, 6};
    if (n == 0)
        cout << 1 << endl;
    else
        cout << cycle[(n - 1) % 4] << endl;
    return 0;
}
