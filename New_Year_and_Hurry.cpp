#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int x, y;
    cin >> x >> y;

    int remaing = (4 * 60) - y;
    int total_time = 0;
    int counts = 0;

    for (int i = 1; i <= x; i++)
    {
        total_time += i*5;
        if(total_time <= remaing)
        {
            counts++;
        }
        else
        {
            break;
        }
    }

    cout << counts << endl;
    return 0;
}