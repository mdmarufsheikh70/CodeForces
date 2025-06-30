#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    long long int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B (n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++)
    {
        B[i] = (A[i] - 1) / 2;
    }

    for(int i = 0; i < n; i++)
    {
        cout << B[i] << endl;
    }
    return 0;
}