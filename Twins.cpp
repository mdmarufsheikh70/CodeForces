#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int> A(n);
    int counts = 1;
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++)
    {
        total += A[i];
    }

    int half = total / 2;
    int second_total = 0;

    for(int i = 0; i < n; i++)
    {
        second_total += A[i];

        if(second_total <= half)
        {

            counts += 1;
        }
    }

    cout << counts << endl;

    return 0;
}