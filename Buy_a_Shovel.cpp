#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int x, y;
    cin >> x >> y;

    int counts = 1;

    while (1)
    {
        int total = x * counts;
        if(total % 10 == y || total % 10 == 0)
        {
            cout << counts << endl;
            return 0;
        }
        else
        {
            counts += 1;
        }
    }
    
    return 0;
}