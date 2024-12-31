#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        long long n;
        cin >> n;  // Read the value of n for each test case

        // Try different values of k starting from 2
        for (int k = 2; ; ++k) {
            long long sum = (1 << k) - 1;  // Compute 2^k - 1 (geometric sum)
            if (n % sum == 0) {  // Check if n is divisible by sum
                cout << n / sum << endl;  // Output the value of x
                break;  // Exit the loop once we find a valid x
            }
        }
    }
    return 0;
}
