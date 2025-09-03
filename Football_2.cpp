#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<string>A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    string tem_1 = A[0];
    string tem_2 ;

    int counts_1 = 0;
    int counts_2 = 0;

    for(int i = 0; i < n; i++)
    {
        if(A[i] == tem_1)
        {
            counts_1++;
        }
        else
        {
            tem_2 = A[i];
            counts_2++;
        }
    }

    if(counts_1 > counts_2)
    {
        cout << tem_1 << endl;
    }
    else
    {
        cout << tem_2 << endl;
    }
    return 0;
}