#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    vector<string> result;
    for (int i = 0; i < s.length(); )
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i += 3;
        }
        else
        {
            string word = "";
            while (i < s.length() && !(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'))
            {
                word += s[i];
                i++;
            }
            result.push_back(word);
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        if (i != 0)
        {
            cout << " ";
        } 
        cout << result[i];
    }

    cout << endl;
    return 0;
}
