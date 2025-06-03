// #include <bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();

//     long long int n;
//     cin >> n;

//     int total = 0;
//     for (int i = 1; i <= n; i++)
//     {

//         if (i % 2 == 0)
//         {
//             total = total + (1 * i);
//         }
//         else
//         {
//             total = total + (-1 * i);
//         }
//     }

//     cout << total << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    long long int n;
    cin >> n;

    int total = 0;
    int sign = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            sign = sign * (-1);
        }
        total = total + i * sign;
        sign = 1;
    }

    cout << total << endl;

    return 0;
}