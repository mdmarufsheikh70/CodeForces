#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<string> S(n);

    for(int i = 0; i < n; i++)
    {
        cin >> S[i];
    }

    int counts = 0;

    for(int i = 0; i < n; i++)
    {
        if(S[i] == "Tetrahedron")
        {
            counts+=4;
        }
        else if(S[i] == "Cube")
        {
            counts+=6;
        }
        else if(S[i] == "Octahedron")
        {
            counts+=8;
        }
        else if(S[i] == "Dodecahedron")
        {
            counts+=12;
        }
        else if(S[i] == "Icosahedron")
        {
            counts+=20;
        }
    }

    cout << counts << endl;

    return 0;
}