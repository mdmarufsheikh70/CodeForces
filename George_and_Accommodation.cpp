#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i] >> B[i];
    }

    int counts = 0;
    for(int i = 0; i < n; i++)
    {
        if((B[i] - A[i]) >= 2)
        {
            counts++;
        }
        else
        {
            continue;
        }
    }

    cout << counts << endl;

    return 0;
}