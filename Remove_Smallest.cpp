#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        vector<int>A(x);
        for(int i = 0; i < x; i++)
        {
            cin >> A[i];
        }

        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < x - 1 - i; j++)
            {
                int tem;
                if(A[j] > A[j+1])
                {
                    tem = A[j+1];
                    A[j+1] = A[j];
                    A[j] = tem;
                }
            }
        }

        int flag = 0;

        for(int i = 0; i < x-1; i++)
        {
            if(A[i+1] - A[i] == 1 || A[i+1] - A[i] == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }

        }
        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else if(A.size() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}