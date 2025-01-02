#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1" << endl;
        return 0;
    }

    string smallest = "", largest = "";
    int sum = s;

    // Construct the largest number
    for (int i = 0; i < m; ++i) {
        int digit = min(9, sum);
        largest += (digit + '0');
        sum -= digit;
    }

    // Construct the smallest number by reversing the largest and fixing leading zeros
    smallest = largest;
    reverse(smallest.begin(), smallest.end());

    if (smallest[0] == '0') {
        for (int i = 1; i < m; ++i) {
            if (smallest[i] > '0') {
                smallest[i]--;
                smallest[0] = '1';
                break;
            }
        }
    }

    cout << smallest << " " << largest << endl;
    return 0;
}
