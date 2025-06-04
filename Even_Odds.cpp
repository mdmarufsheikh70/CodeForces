#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int x, y;
    cin >> x >> y;

    vector<int> A(x);
    vector<int> B(x);
    vector<int> C(x);

    for(int i = 0; i < x; i++)
    {
        A[i] = i+1;
    }

    int j = 0, k = 0;

    for(int i = 0; i < x; i++)
    {
        if(A[i] % 2 != 0)
        {
            B[j] = A[i];
            j++;
        }
        else
        {
            C[k] = A[i];
            k++;
        }
    }

    for(int i = 0; i < k; i++)
    {
        B[j+i] = C[i];
    }

   cout << B[y-1] << endl;
    return 0;
}