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

    int tem = 0;
    int total = 0;

    for(int j = 0; j < n; j++)
    {
       tem += (B[j] - A[j]);
       if(tem > total)
       {
        total = tem;
       }

    }

    cout << total << endl;

    return 0;
}