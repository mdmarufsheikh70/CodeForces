#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    
    int n;
    cin >> n;

    vector<int> A(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(A[i] == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
    return 0;
}