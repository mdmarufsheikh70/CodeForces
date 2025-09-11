#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    int counts_1 = 0;
    int counts_2 = 0;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if(a > b)
        {
            counts_1++;
        }
        else if(b > a)
        {
            counts_2++;
        }
    }
    
    if(counts_1 > counts_2)
    {
        cout << "Mishka" << endl;
    }
    else if(counts_2 > counts_1)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}