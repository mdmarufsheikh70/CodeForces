#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            continue;
        }
    }

    cout << "NO" << endl;

    return 0;
}