#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i; // Find tallest soldier
        }
        if (arr[i] <= arr[minIndex]) {
            minIndex = i; // Find shortest soldier
        }
    }

    int result = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        result--; // Adjust for overlap
    }

    cout << result;
    return 0;
}
