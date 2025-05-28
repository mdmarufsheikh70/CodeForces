#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int counts= 0;
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < n -1; i++)
    {
        if(s[i] == s[i+1])
        {
            counts++;
        }
    }

    cout << counts << endl;;

    return 0;
}