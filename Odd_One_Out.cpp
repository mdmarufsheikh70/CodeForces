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
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b)
        {
            cout << c << endl;
        }
        else if(b == c)
        {
            cout << a << endl;
        }
        else if(c == a)
        {
            cout << b << endl;
        }
    }
    
    return 0;
}