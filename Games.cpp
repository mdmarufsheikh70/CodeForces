#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i] >> B[i];
    }

    int counts = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(A[i] == B[j+1])
            {
                counts++;
            }
            
            
            if(B[i] == A[j+1])
            {
                counts++;
            }
        }
    }

    cout << counts << endl;
    return 0;
}