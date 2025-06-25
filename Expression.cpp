#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int x, y, z;
    cin >> x >> y >> z;

    
    int results_1 = (x + y) * z;
    int results_2 = x * (y + z);
    int results_3 = x * y * z;
    int results_4 = x + y + z;
    int results_5 = (x * y) + z;
    int results_6 = x + (y * z);
    
    vector<int> A = {results_1, results_2, results_3, results_4, results_5, results_6};

    int max = A[0];

    for(int i = 1; i < A.size() - 1; i++)
    {
        if(max < A[i])
        {
            max = A[i];
        }
    }

    cout << max << endl;
    return 0;
}