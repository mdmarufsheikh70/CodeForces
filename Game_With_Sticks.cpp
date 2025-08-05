#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    if (n < m)
    {
        if (n % 2 == 0)
        {
            cout << "Malvika" << endl;
        }
        else
        {
            cout << "Akshat" << endl;
        }
    }
    else
    {
        if (m % 2 == 0)
        {
            cout << "Malvika" << endl;
        }
        else
        {
            cout << "Akshat" << endl;
        }
    }

    return 0;
}