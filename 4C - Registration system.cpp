#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    unordered_map<string, int> stringCount; // Map to store the count of each string

    while (t--) {
        string s;
        cin >> s;

        if (stringCount[s] == 0) {
            // If the string is not yet in the map
            cout << "OK" << endl;
        } else {
            // If the string already exists in the map
            cout << s << stringCount[s] << endl;
        }
        stringCount[s]++; // Increment the count for the string
    }

    return 0;
}
