// #include<bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();

//     int n;
//     cin >> n;

//     int a, b;

//     while (n--)
//     {
//         int counts = 0;
//         cin >> a >> b;
//         if(a > b)
//         {
//             while (a>b)
//             {
//                 a-=10;
//                 counts++;
//             } 
//         }
//         else
//         {
//             while (a<b)
//             {
//                 a+=10;
//                 counts++;
//             }
//         }
//         cout << counts << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    int a, b;

    while (n--)
    {
        int counts = 0;
        cin >> a >> b;
        int results = a - b;
        if(results < 0)
        {
            results = results * - 1; 
        }

        cout << (results + 9) / 10 << endl;
    }

    return 0;
}