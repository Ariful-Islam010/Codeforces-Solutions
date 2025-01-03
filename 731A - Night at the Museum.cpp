#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string input;
    cin >> input;

    int totalRotations = 0;
    char currentPosition = 'a';

    for (char target : input) {
        int clockwise = abs(target - currentPosition);
        int counterClockwise = 26 - clockwise;
        totalRotations += min(clockwise, counterClockwise);
        currentPosition = target;
    }

    cout << totalRotations << endl;

    return 0;
}
