#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<string> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int counts = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] != A[i + 1])
        {
            counts += 1;
        }
        else
        {
            continue;
        }
    }

    cout << counts << endl;

    return 0;
}