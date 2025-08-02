#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    
    int t;
    cin >> t;

    while (t--) {
        long long m;
        cin >> m;

        while (m % 2 == 0) {
            m /= 2;
        }

        if (m == 1)
        {
           cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
