#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int k, l, m, n;
    cin >> k >> l >> m >> n;

    long long int d;
    cin >> d;

    int counts = 0;

    for(int i = 1; i <= d; i++)
    {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            counts++;
        }
    }

    cout << counts << endl;
    return 0;
}