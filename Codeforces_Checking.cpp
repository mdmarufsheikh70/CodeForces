#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    vector<char>A(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
        if(A[i] == 'c' || A[i] == 'o' || A[i] == 'd' || A[i] == 'e' || A[i] == 'f' || A[i] == 'o' || A[i] == 'r' || A[i] == 'c' || A[i] == 'e' || A[i] == 's')
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