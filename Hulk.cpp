#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    string first = "I hate ";
    string second = "that I love ";
    string thrid = "that I hate ";
    string total = "";

    for(int i = 2; i <= n; i++)
    {
        if(i  % 2 == 0)
        {
            total += second;
        }
        else
        {
            total += thrid;
        }

    }

    cout << first << total << "it" << endl;

    return 0;
}