#include<iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = 0, end = 0, currentTime = 0, maxBooks = 0;

    while (end < n) {
        currentTime += arr[end];
        
        while (currentTime > t) {
            currentTime -= arr[start];
            start++;
        }
        
        maxBooks = max(maxBooks, end - start + 1);
        end++;
    }

    cout << maxBooks << endl;
    return 0;
}
