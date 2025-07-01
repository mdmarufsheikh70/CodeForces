#include<bits/stdc++.h> 
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n , m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i % 2 != 0)
            {
                if(i % 4 == 1)
                {
                    if(j == m - 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else
                {
                    if(j == 0)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }
    return 0;
}