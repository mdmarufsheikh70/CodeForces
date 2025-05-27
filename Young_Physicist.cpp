#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
      
    long long int results = 0;
    int n;
    cin >> n;
    int  x[3*n];

    for(int i = 0; i < 3*n; i+=3)
    {
        cin >> x[i] >> x[i+1] >> x[i+2];
    }

    for(int i = 0; i < n; i++)
    {
        results = results + (x[i] + x[i+3] + x[i+6]);
    }

    if(results == 0)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}