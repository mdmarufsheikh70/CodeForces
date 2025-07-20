#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string s;
    cin >> s;

    int flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = s[i] + 32;
        }
    }
    else
    {
        int flag2 = 1;
        if (s[0] >= 97)
        {
            for (int i = 1; i < s.length(); i++)
            {
                if (s[i] >= 97)
                {
                    flag2 = 0;
                    break;
                }
            }
        }
        else
        {
            flag2 = 0;
        }

        if (flag2 == 1)
        {
            s[0] = s[0] - 32;
            for (int i = 1; i < s.length(); i++)
            {
                s[i] = s[i] + 32;
            }
        }
    }

    cout << s << endl;
    return 0;
}