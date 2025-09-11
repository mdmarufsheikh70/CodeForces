#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    string s_1 = "codeforces";

    int t;
    cin >> t;
    while (t--)
    {
        string s_2;
        cin >> s_2;
        int counts = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s_1[i] != s_2[i])
            {
                counts++;
            }
        }
        cout << counts << endl;
    }

    return 0;
}