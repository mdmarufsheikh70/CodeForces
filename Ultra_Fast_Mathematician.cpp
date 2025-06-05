#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    string s_1;
    string s_2;
    string s_3 = "";

    cin >> s_1; 
    cin >> s_2;

    for(int i = 0; i < s_1.length(); i++)
    {
        if(s_1[i] == s_2[i])
        {
            s_3 += '0';
        }
        else
        {
            s_3 += '1';
        }
    }

    cout << s_3 << endl;

    return 0;
}