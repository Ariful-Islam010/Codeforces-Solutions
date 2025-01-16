#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array
    sort(a.begin(), a.end());

    // Calculate the maximum difference
    ll difference = a[n - 1] - a[0];

    // Count occurrences of the smallest and largest values
    ll min_count = count(a.begin(), a.end(), a[0]);
    ll max_count = count(a.begin(), a.end(), a[n - 1]);

    // Output the result
    ll count = (a[0] == a[n - 1]) ? (n * (n - 1)) / 2 : min_count * max_count;
    cout << difference << " " << count << endl;

    return 0;
}
