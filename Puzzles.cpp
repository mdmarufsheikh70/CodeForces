#include<bits/stdc++.h>
using namespace std;
#define optimize(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int x, y;
    cin >> x >> y;

    vector<int>A(y);
    for(int i = 0; i < y; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < y - i - 1; j++)
        {
            if(A[j] > A[j+1])
            {
                int tem = A[j+1];
                A[j+1] = A[j];
                A[j] = tem;
            }
        }
    }

    int Min = A[y-1] - A[0];

    for(int i = 0; i <= y - x; i++)
    {
        int diffrence = A[i + x - 1] - A[i];
        if(Min > diffrence)
        {
            Min = diffrence;
        }
    }

    cout << Min << endl;

    return 0;
}
