#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    char c;
    vector<char> s(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> s[i]; 
    }

    int counts_1 = 0;
    int counts_2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 65 && s[i] < 97)
        {
            counts_1 += 1;
        }
        else
        {
            counts_2 += 1;
        }
    }

    if(counts_1 > 0 && counts_2 > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}