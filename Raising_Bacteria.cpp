#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int>A;
    while (n)
    {
        int results = n % 2;
        A.push_back(results);
        n  = n / 2;
    }
    
    int counts = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] == 1)
        {
            counts++;
        }
    }

    cout << counts << endl;
    return 0;
}