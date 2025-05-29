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

    int counts_1 = 0;
    int counts_2 = 0;

    for(int j = 0; j < n; j++)
    {
        if(s[j] == 'A')
        {
            counts_1++;
        }
        else
        {
            counts_2++;
        }
    }

    if(counts_1 > counts_2)
    {
        cout << "Anton" <<endl;
    }
    else if(counts_2 > counts_1)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" <<endl;
    }
    return 0;
}