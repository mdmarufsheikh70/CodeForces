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
        int a;
        cin >> a;
        for(int i = 0; i < 10; i++)
        {
            if((a+1) % 3 == 0)
            {
                cout << "First" << endl;
                break;
            }
            else if((a-1) % 3 == 0)
            {
                cout << "First" << endl;
                break;
            }

            if((a+1) % 3 != 0)
            {
                a = a + 1;
            }
            else
            {
                a = a-1;
            }
         
            cout << "Second" << endl;
            break;
        }
    }
    
    return 0;
}