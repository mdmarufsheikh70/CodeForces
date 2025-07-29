#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    
    while (t--)
    {
        int counts = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b > a)
        {
            counts++;
        }
        if(c > a)
        {
            counts++;
        }
        if(d > a)
        {
            counts++;
        }
        cout << counts <<endl;
    }
    return 0;
}