#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int main()
{
    optimize();

    long long int x; int y;
    cin >> x >> y;

    for(int i = 0; i < y; i++)
    {
        if(((x / 10) * 10 - x) == 0)
        {
            x = x / 10;
        }
        else
        {
            x = x - 1;
        }
    }

    cout << x << endl;

    return 0;
}