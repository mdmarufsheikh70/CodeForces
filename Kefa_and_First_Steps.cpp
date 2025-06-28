#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    long long int n;
    cin >> n;

    vector<int> A(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int maximume = 0;
    int counts = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(A[i] <= A[i+1])
        {
            counts++;
        }
        if(counts > maximume)
        {
            maximume = counts;
            counts = 0;
        }
    }

    cout << maximume + 1 << endl;

    return 0;
}