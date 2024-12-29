#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // If the number is positive, the maximum balance is the number itself
    if (n >= 0) {
        cout << n << endl;
    } else {
        // Calculate the two possible balances after removing digits
        int lastDigitRemoved = n / 10; // Remove the last digit
        int secondLastDigitRemoved = (n / 100) * 10 + (n % 10); // Remove the second last digit

        // Output the maximum of the two options
        cout << max(lastDigitRemoved, secondLastDigitRemoved) << endl;
    }

    return 0;
}
