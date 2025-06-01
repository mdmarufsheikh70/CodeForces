#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string s;
    cin >> s;

    string tem = "hello";
    int counts = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == tem[counts])
        {
            counts++;
        }
    }

    if(counts == 5)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}