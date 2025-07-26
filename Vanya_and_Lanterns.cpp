#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, l;
    cin >> n >> l;

    vector<double> A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(A[j] > A[j + 1])
            {
                double temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
            }
        }
    }

    double Max = A[0];

    for(int i = 0; i < n - 1; i++)
    {
        double gap = (A[i + 1] - A[i]) / 2.0;
        if(Max < gap)
        {
            Max = gap;
        }
    }

    if(Max < l - A[n - 1])
    {
        Max = l - A[n - 1];
    }

    cout << fixed << setprecision(10) << Max << endl;

    return 0;
}
