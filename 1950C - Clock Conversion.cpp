#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        string s;
        cin >> s; // Input time in 24-hour format (hh:mm)
        int hh = stoi(s.substr(0, 2)); // Extract hour
        string mm = s.substr(3, 2);    // Extract minute
        
        string period = (hh >= 12) ? "PM" : "AM"; // Determine AM/PM
        if (hh == 0) 
            hh = 12; // Convert 00:xx to 12:xx AM
        else if (hh > 12) 
            hh -= 12; // Convert 13-23 to 1-11 PM
        
        // Format output
        cout << (hh < 10 ? "0" : "") << hh << ":" << mm << " " << period << endl;
    }
    return 0;
}
