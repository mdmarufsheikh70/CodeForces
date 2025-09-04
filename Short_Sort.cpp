#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        string s_1 = s;
        string s_2 = s;
        string s_3 = s;

        char tem_1, tem_2, tem_3;

        tem_1 = s_1[0];
        s_1[0] =s_1[1];
        s_1[1] = tem_1;

        tem_2 = s_2[1];
        s_2[1] = s_2[2];
        s_2[2] = tem_2;

        tem_3 = s_3[0];
        s_3[0] = s_3[2];
        s_3[2] = tem_3;

        if(s == "abc")
        {
            cout << "YES" << endl;
        }
        else if(s_1 == "abc")
        {
            cout << "YES" << endl;
        }
        else if(s_2 == "abc")
        {
            cout << "YES" << endl;
        }
        else if (s_3 == "abc")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        cin.ignore();
    }
    
    return 0;
}