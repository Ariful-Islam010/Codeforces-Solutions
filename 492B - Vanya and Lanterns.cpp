#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>  // for setprecision
#include<vector>
using namespace std;

int main() {
    double n, l, i;
    cin >> n >> l;
    vector<double> a(n);  // Using vector instead of a static array
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // Start by considering the radius between the first point and the edge
    double radius = max(a[0], l - a[n - 1]);

    // Then consider the radius between consecutive points
    for(i = 0; i < n - 1; i++) {
        if((a[i + 1] - a[i]) / 2.0 > radius) {
            radius = (a[i + 1] - a[i]) / 2.0;
        }
    }

    cout << fixed << setprecision(10) << radius << endl;
    return 0;
}
