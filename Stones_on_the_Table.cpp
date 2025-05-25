#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int counts_1 = 0;
    int counts_2 = 0;

    int x;
    cin >> x;

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[0] - s[i] == 0)
        {
            counts_1++;
        }
    }

    if(s.length() - 1 != counts_1)
    {
        for(int i = 0; i < s.length() - 2; i++)
        {
            if(s[i] - s[i+1] == 0)
            {
                counts_2++;
            }
        }

        cout << counts_2 << endl;

    }
    else
    {
        cout << counts_1 - 1 << endl;
    }

    return 0;
}