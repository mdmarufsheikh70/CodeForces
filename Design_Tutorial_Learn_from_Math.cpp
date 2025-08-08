#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isComposite(int n)
{
    if (n <= 3)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return true;
        } 
    }
    return false;
}

int main()
{
    optimize();
    int n;
    cin >> n;

    for (int i = 4; i < n; i++)
    {
        int j = n - i;
        if (isComposite(i) && isComposite(j))
        {
            cout << i << " " << j << "\n";
            return 0;
        }
    }

    return 0;
}
