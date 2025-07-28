#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int w, x, y, z;
    cin >> w >> x >> y >> z;

    vector<int>A;
    A.push_back(w);
    A.push_back(x);
    A.push_back(y);
    A.push_back(z);

    int tem;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4 - 1 - i; j++)
        {
            if(A[j] > A[j+1])
            {
                tem = A[j+1];
                A[j+1] = A[j];
                A[j] = tem;
            }
        }
    }

    int a = A[3] - A[2];
    int b = A[3] - A[1];
    int c = A[3] - A[0];

    cout << a << " " << b << " " << c << endl;
    return 0;
}