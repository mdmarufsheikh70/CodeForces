#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxPieces = 0;

    for (int i = 0; i <= n / a; i++) {
        for (int j = 0; j <= n / b; j++) {
            int remaining = n - (a * i + b * j);
            if (remaining >= 0 && remaining % c == 0) {
                int k = remaining / c;
                int total = i + j + k;
                if(maxPieces > total)
                {
                    maxPieces = maxPieces;
                }
                else
                {
                    maxPieces = total;
                }
            }
        }
    }

    cout << maxPieces << endl;
    return 0;
}
