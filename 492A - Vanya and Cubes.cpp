#include <iostream>
using namespace std;

int main() {
    int n, height = 0, cubesUsed = 0;
    cin >> n;

    for (int level = 1; ; level++) {
        int cubesForLevel = (level * (level + 1)) / 2;
        if (cubesUsed + cubesForLevel > n)
            break;
        cubesUsed += cubesForLevel;
        height++;
    }

    cout << height;
    return 0;
}
