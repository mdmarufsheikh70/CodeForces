#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int counts = 0;
    int Max = A[0];
    int Min = A[0];

    for (int i = 1; i < n; i++)
    {
        if (A[i] > Max)
        {
            counts++;
            Max = A[i];
        }
        else if (A[i] < Min)
        {
            counts++;
            Min = A[i];
        }
    }

    cout << counts << endl;
    return 0;
}
