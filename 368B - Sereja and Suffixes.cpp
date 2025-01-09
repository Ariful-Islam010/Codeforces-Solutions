#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> distinctCount(n);
    unordered_set<ll> seen;

    for (ll i = n - 1; i >= 0; i--) {
        seen.insert(a[i]);
        distinctCount[i] = seen.size();
    }

    while (m--) {
        ll li;
        cin >> li;
        cout << distinctCount[li - 1] << endl;
    }

    return 0;
}
