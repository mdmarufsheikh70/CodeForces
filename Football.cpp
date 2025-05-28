#include <bits/stdc++.h>
using namespace std;
#define optimiz() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimiz();

    string s;
    cin >> s;

    int counts_1 = 0;
    int counts_2 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {

            counts_2 = 0;
            counts_1 = counts_1 + 1;
        }
        else
        {

            counts_1 = 0;
            counts_2 = counts_2 + 1;
        }

        if (counts_1 >= 7 || counts_2 >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}