#include<bits/stdtr1c++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() 
{
    optimize();

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 97)
        {
            continue;
        }
        else
        {
            s[i] = s[i] + 32;
        }
        
    }

    int length = s.length();
    string tem = "";

    for(int i = 0; i < length; i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            tem = tem + s[i];
        }
        else
        {
            continue;
        }
    }

    for(int i = 0; i < tem.length(); i++)
    {
        cout << "."<< tem[i];
    }

    return 0;
}
