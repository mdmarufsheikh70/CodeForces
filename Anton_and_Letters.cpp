#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string s;
    getline(cin, s);
    string c = "";
    string d = "";

    for(int i = 0; i < s.length() - 1; i++)
    {
       if(s[i] >= 'a' && s[i] <= 'z')
       {
        c+=s[i];
       }
    }

    for(int i = 0; i < c.length(); i++)
    {
        int flag = 0;
        for(int j = 0; j < i; j++)
        {
            if(c[i] == c[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            d += c[i];
        }
    }

    cout << d.length() << endl;

    return 0;
}