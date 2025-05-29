#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, h;
    cin >> n >> h;

    vector<int> A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int counts = 0;

    for (int i = 0; i < n; i++)
    {
        if(A[i] <= h)
        {
            counts +=1;
        }
        else
        {
            counts += 2;
        }
    }
    
    cout << counts << endl;

    return 0;
}