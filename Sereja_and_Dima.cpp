#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    
    vector<int>A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int j = 0;
    int l = n - 1;
    int counts = 1;
    int results_1 = 0;
    int results_2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(counts % 2 == 1)
        {
            if(A[j] > A[l])
            {
                results_1 += A[j];
                counts++;
                j++;
            }
            else
            {
                results_1 += A[l];
                counts++;
                l--;
            }
            
        }
        else
        {
            if(A[j] > A[l])
            {
                results_2 += A[j];
                counts++;
                j++;
            }
            else
            {
                results_2 += A[l];
                counts++;
                l--;
            }
        }
    }

    cout << results_1 << " " << results_2 << endl;

    return 0;
}