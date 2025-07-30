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
        string s;
        cin >> s;

        int results_1 = 0;
        int results_2 = 0;

        results_1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        results_2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');

        if(results_1 == results_2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}