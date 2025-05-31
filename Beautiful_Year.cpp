#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int years;
    cin >> years;

    vector<int> A(4);

    for (int i = years + 1; i <= 9000; i++)
    {
        int flag = 0;
        int tem = i;

        for (int j = 3; j >= 0; j--)
        {
            int x = tem % 10;
            A[j] = x;
            tem = tem / 10;
        }

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (A[i] == A[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        
        if(flag == 0)
        {
          cout << i <<endl;
          return 0;
        }
    }
    return 0;
}