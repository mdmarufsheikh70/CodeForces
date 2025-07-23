#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int available = 0;
    int untreated = 0;

    for (int i = 0; i < n; i++)
    {
        int event;
        cin >> event;

        if (event == -1)
        {
            if (available > 0)
            {
                available--;
            }
            else
            {
                untreated++;
            }
        }
        else
        {
            available += event;
        }
    }

    cout << untreated << endl;

    return 0;
}