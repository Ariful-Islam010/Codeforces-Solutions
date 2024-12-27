#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;

        // Extract the digit and length of the number
        int digit = x % 10; // The repeated digit
        int length = 0;
        int temp = x;
        while (temp > 0) {
            length++;
            temp /= 10;
        }

        // Calculate total keypresses
        int totalKeypresses = 0;
        
        // Add keypresses for digits before `digit`
        for (int d = 1; d < digit; d++) {
            totalKeypresses += 1 + 2 + 3 + 4; // Keypresses for all lengths of `d`
        }

        // Add keypresses for the current digit `digit` up to length `n`
        for (int l = 1; l <= length; l++) {
            totalKeypresses += l;
        }

        cout << totalKeypresses << endl;
    }

    return 0;
}
