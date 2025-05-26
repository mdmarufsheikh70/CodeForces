#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int x, y, z;
    long long int total = 0;

    cin >> x >> y >> z;

    // for(int i = 1; i <= z; i++)
    // {
    //     total = total + (x * i);
    // }

    total = x * ((z * (z + 1)) / 2);

    if (total <= y)
    {
        cout << 0LL << endl;
    }
    else
    {
        cout << total - y << endl;
    }

    return 0;
}