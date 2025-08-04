#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    while (n--)
    {
        int m;
        cin >> m;

        int a = m % 10;
        int b = m / 10;

        cout << a + b << endl;
    }
    
    return 0;
}