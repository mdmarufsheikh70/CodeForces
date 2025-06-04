#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    
    vector<int> A(4);

    for(int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }

    int counts = 0;

    for(int i = 0; i < 4; i++)
    {
        int flag = 1;
        for(int j = 0; j < i; j++)
        {
            if(A[i] == A[j])
            {
                flag = 0;
                break;
            }
            else
            {
                continue;
            }
        }
        if(flag == 1)
        {
            counts +=1;
        }
        else
        {
            continue;
        }
    }

    cout << 4 - counts << endl;
    
    return 0;
}