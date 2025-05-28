#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    
    long long int n;
    cin >> n;

    int counts = 0;
 
    for(int i = 0; n > 0; i++)
    {
        int x = n % 10;
        if(x == 4 || x == 7)
        {
            counts++;
        }
        else
        {
            n = n / 10;
            continue;
        }
        n = n / 10;
    }

    if(counts == 4 || counts == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;

    }

    return 0;
}