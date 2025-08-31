#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        vector<int> A(3);
        for(int i = 0; i < 3; i++)
        {
            cin >> A[i];
        }

        if (A[0] + A[1] >= 10 || A[1] + A[2] >= 10 || A[0] + A[2] >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
