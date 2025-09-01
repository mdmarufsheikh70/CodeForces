#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    
    string s_1, s_2;
    int n;
    cin >> n;

    while (n--)
    {
        cin >> s_1 >> s_2;
        char tem_1;
        char tem_2;
        tem_1 = s_1[0];
        tem_2 = s_2[0];

        s_1[0] = tem_2;
        s_2[0] = tem_1;
        cout << s_1 << " " << s_2 << "\n" ;
    }
    
    return 0;
}