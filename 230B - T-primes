#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of test cases
    
    while (n--) {
        long long x;
        cin >> x;  // Read the number x
        
        // Step 1: Check if x is a perfect square
        long long root = sqrt(x);
        if (root * root == x) {
            // Step 2: If x is a perfect square, check if root is a prime number
            bool is_prime = true;
            for (int i = 2; i * i <= root; i++) {
                if (root % i == 0) {
                    is_prime = false;
                    break;
                }
            }
            
            // Step 3: If root is prime, print "YES", otherwise print "NO"
            if (is_prime && root > 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;  // If x is not a perfect square
        }
    }

    return 0;
}
