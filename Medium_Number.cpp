#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    while (n--)
    {
        vector<int>A;
        int a, b, c;
        cin >> a >> b >> c;
        A.push_back(a);
        A.push_back(b);
        A.push_back(c);

        sort(A.begin(),A.end());
        cout << A[1] << endl;
    }

    return 0;
}