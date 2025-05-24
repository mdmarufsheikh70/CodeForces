#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int x, y;
    int counts = 1;
    cin >> x >> y;
    for(int i = 0; i < x + y; i++)
    {
        x = x * 3;
        y = y * 2;
        if(x  > y ) 
        {
            break;
        }
        else
        {
            counts++;
        }
        
    }
    cout << counts << endl;
    return 0;
}