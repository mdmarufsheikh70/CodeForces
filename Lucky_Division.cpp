// #include<bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();

//     int n; 
//     cin >> n;

//     for(int i = 0; i < n; i++)
//     {
//         if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 444 == 0 || n % 474 == 0 || n % 447 == 0 || n % 744 == 0 || n % 777 == 0 || n % 747 == 0 || n % 477 == 0 || n % 774 == 0)
//         {
//             cout << "YES" << endl;
//             return 0;
//         }

//     }

//     cout << "NO" << endl;

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

    int flag = 0;
    for(int i = 0; n > 0; i++)
    {
        int x = n % 10;
        if()
        {
            flag = 1;
            cout << "NO" << endl;
            return 0;
        }
        n = n / 10;
    }

    cout << "YES" << endl;

    return 0;
}


