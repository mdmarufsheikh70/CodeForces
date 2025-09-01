#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);

int main()
{
    optimize();
    
    int t;
    cin >> t;

    vector<int>A;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int Min = INT_MAX;

        for(int i = a; i <= b; i++)
        {
            int min = (i - a) + (b - i);
            if(min < Min)
            {
                Min = min;
            }
        } 
        A.push_back(Min);
    }

    for(int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}