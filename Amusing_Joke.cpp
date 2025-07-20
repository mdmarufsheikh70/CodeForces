#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    string s1, s2, s3, s_con_cat;

    cin >> s1 >> s2 >> s3;

    s_con_cat = s1 + s2;

    for(int i = 0; i < s3.length(); i++)
    {
        for(int j = 0; j < s3.length() - 1 - i; j++)
        {
            char temp1, temp2;
            if(s3[j] > s3[j+1])
            {
                temp1 = s3[j+1];
                s3[j+1] = s3[j];
                s3[j] = temp1;
            }

            if(s_con_cat[j] > s_con_cat[j+1])
            {
                temp2 = s_con_cat[j+1];
                s_con_cat[j+1] = s_con_cat[j];
                s_con_cat[j] = temp2;
            }
        }
    }

    if(s3 == s_con_cat)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}