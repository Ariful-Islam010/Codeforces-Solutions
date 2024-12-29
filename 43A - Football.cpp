#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string team1, team2;
    int score1 = 0, score2 = 0;

    for (int i = 0; i < n; i++) {
        string goal;
        cin >> goal;

        if (team1.empty() || team1 == goal) {
            team1 = goal;
            score1++;
        } else {
            team2 = goal;
            score2++;
        }
    }

    cout << (score1 > score2 ? team1 : team2) << endl;
    return 0;
}
