#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> letters;

    for(int i = 0; i < n; i++)
    {
        char ch = tolower(s[i]);
        letters.insert(ch);
    }

    if(letters.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
