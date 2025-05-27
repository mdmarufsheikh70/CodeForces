#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string s;
    cin >> s;

    int counts = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
        {
            counts++;
        }
    }

    if (counts > s.length() / 2)
    {
        for (auto &c : s)
        {
            c = toupper(c);
            cout << c;
        }
    }
    else
    {
        for (auto &c : s)
        {
            c = tolower(c);
            cout << c;
        }
    }

    cout << endl;

    return 0;
}