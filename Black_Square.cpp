#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    vector<int>A(5);
    for(int i = 1; i < 5; i++)
    {
        cin >> A[i];
    }

    string s;
    cin >> s;

    int sum = 0;
    for(int i = 0; i < s.length(); i++)
    {
        sum += A[s[i] - '0'];
    }

    cout << sum << endl;

    return 0;
}