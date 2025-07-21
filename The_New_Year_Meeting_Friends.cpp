#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    int x, y, z;
    vector<int>A(3);

    for(int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
  
    
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < A.size() - 1 - i; j++)
        {
            if(A[j] < A[j+1])
            {
                int tem = A[j+1];
                A[j+1] = A[j];
                A[j] = tem;
            }
        }
    }

    cout << (A[0] - A[1]) + (A[1] - A[2]) << endl;
    return 0;
}