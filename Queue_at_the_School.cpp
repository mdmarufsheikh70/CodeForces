#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, t;
    cin >> n >> t;

    cin.ignore();

    string s;
    cin >> s;

    char tem;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j+1] == 'G')
            {
                tem = s[j+1];
                s[j+1] = s[j];
                s[j] = tem;
                j++;
            }
            else
            {
                continue;
            }
        }
    }

    cout << s << endl;
    return 0;
}