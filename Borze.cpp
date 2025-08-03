#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string s;
    cin >> s;
    string tem = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '.')
        {
            tem += '0';
        }
        else if(s[i] == '-' && s[i+1] == '.')
        {
            tem += '1';
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-')
        {
            tem += '2';
            i++;
        }
    }

    cout << tem << endl;
    return 0;
}