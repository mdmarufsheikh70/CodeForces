#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    string tem = "";
    vector<string>A;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() > 2)
        {
            tem += s[0];
            for (int i = 1; i < s.length() - 2; i+=2)
            {
                if (s[i] == s[i + 1])
                {
                    tem += s[i];
                }
                else
                {
                    tem+=s[i];
                    tem+=s[i+1];
                }
            }
            tem += s[s.length()-1];
        }
        else
        {
            tem = s;
        }
        A.push_back(tem);
        tem = "";
    }

    for(int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}