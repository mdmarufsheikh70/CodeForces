#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    long long n, m;
    cin >> n >> m;

    vector<long long> A(m);
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    long long time = 0;
    long long current = 1;

    for (int i = 0; i < m; i++) {
        if (A[i] >= current) {
            time += A[i] - current;
        } else {
            time += n - (current - A[i]);
        }
        current = A[i];
    }

    cout << time << endl;

    return 0;
}
