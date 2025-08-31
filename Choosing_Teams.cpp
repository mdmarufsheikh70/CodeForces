#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    optimize();

    int n, k;
    cin >> n >> k;

    int canPlay = 0;

    for (int i = 0; i < n; i++) {
        int timesPlayed;
        cin >> timesPlayed;
        if (timesPlayed + k <= 5) {
            canPlay++;
        }
    }

    cout << (canPlay / 3) << endl;

    return 0;
}
