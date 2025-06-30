#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int>A(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int even = 0; 
    int odd = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(A[i] % 2 == 0)
        {
            even ++;
        }
        else
        {
            odd++;
        }
    }
    if(even > odd)
    {
        for(int i = 0; i < n; i++)
        {
            if(A[i] % 2 != 0)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(A[i] % 2 == 0)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    return 0;
}