#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string s, t;
    cin >> s;
    cin.ignore();
    cin >> t;

    int n = s.length() - 1;
    string tem;
    for(int i = n; i >= 0; i--)
    {
        tem = tem + s[i];
        
    }

    if(t == tem)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}