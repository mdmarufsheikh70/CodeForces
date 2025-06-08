#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    vector<int> A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int temp;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++){
            if(A[j] > A[j+1])
            {
                temp = A[j+1];
                A[j+1] = A[j];
                A[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}