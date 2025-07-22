#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);
    for(int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            pair <int, int> tem;
            if(dragons[j] > dragons[j+1])
            {
                tem = dragons[j+1];
                dragons[j+1] = dragons[j];
                dragons[j] = tem;

            }
        }
    }
    sort(dragons.begin(), dragons.end());

    for(int i = 0; i < n; i++)
    {
        if(s > dragons[i].first)
        {
            s += dragons[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
