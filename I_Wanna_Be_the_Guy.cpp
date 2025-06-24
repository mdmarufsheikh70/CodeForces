#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    int p;
    cin >> p;
    vector<int> A(p);
    for (int i = 0; i < p; i++) {
        cin >> A[i];
    }

    int q;
    cin >> q;
    vector<int> B(q);
    for (int i = 0; i < q; i++) {
        cin >> B[i];
    }

    vector<int> merged(p + q);
    for (int i = 0; i < p; i++) {
        merged[i] = A[i];
    }
    for (int i = 0; i < q; i++) {
        merged[p + i] = B[i];
    }

    int C[101];
    int s = 0;

    for (int i = 0; i < p + q; i++) {
        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (merged[i] == C[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            C[s] = merged[i];
            s++;
        }
    }

    if (s == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
