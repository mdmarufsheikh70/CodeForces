#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio; cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    string s;
    cin >> s;

    if (s[0] < 97)
    {
        s[0] = s[0];
    }
    else
    {
        s[0] = s[0] - 32;
    }

    cout << s << endl;
    return 0;
}