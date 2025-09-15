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
        int n;
        cin >> n;

        if ((n / 2) % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        vector<int> A(n);
        int sum_1 = 0, sum_2 = 0;

        int j = 2;
        for (int i = 0; i < n / 2; i++)
        {
            A[i] = j;
            sum_1 += j;
            j += 2;
        }

        int k = 1;
        for (int i = n / 2; i < n - 1; i++)
        {
            A[i] = k;
            sum_2 += k;
            k += 2;
        }

        A[n - 1] = sum_1 - sum_2;

        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
