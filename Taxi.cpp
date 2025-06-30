#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    long long int n;
    cin >> n;

    vector<int> A(n);
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum+=A[i];
    }

    int results = (sum + 4 - 1) / 4;

    cout << results << endl;

    return 0;
}