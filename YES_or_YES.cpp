#include <bits/stdc++.h>
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

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < 92)
            {
                s[i] = s[i] + 32;
            }
        }

        if (s == "yes")
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