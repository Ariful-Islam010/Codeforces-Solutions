#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    // Loop through each test case
    while (t--) {
        int k;
        cin >> k;
        
        int count = 0;   // To count how many liked numbers we have found
        int current = 1;  // Starting number
        
        // Find the k-th liked number
        while (count < k) {
            if (current % 3 != 0 && current % 10 != 3) {
                count++;   // Increment the counter if the number is liked
            }
            if (count < k) {
                current++;  // Only increment if we haven't found the k-th liked number
            }
        }
        
        cout << current << endl;  // Output the k-th liked number
    }
    
    return 0;
}
