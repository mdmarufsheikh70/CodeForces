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
        cin >> A[i];
    }

    for(int j = 0; j < n; j++)
    {
        B[(A[j]-1)] = j + 1; 
    }

    for(int i = 0; i < n; i++)
    {
        cout << B[i] <<" ";
    }

    cout << endl;

    return 0;
}