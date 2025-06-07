// #include<bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();
//     int t; 
//     cin >> t;

//     vector<int> A(t);
//     vector<int> B(t);
//     vector<int> C(t);

//     for(int i = 0; i < t; i++)
//     {
//         cin >> A[i] >> B[i];
//     }

//     for(int i = 0; i < t; i++)
//     {
//         int counts = 0;
//         if(A[i] > B[i])
//         {
//             while (A[i] % B[i] != 0)
//             {
//                 A[i] = A[i] + 1 ;
//                 counts += 1;
//             }
//             C[i] = counts;
//         }
//         else
//         {
//             C[i] = B[i] - A[i];
//         }
       
//     }
    
//     for(int i = 0; i < t; i++)
//     {
//         cout << C[i] << endl;
//     }

//     cout << endl;

//     return 0;
// }


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
        long long a, b;
        cin >> a >> b;
        
        long long remaine = a % b;
        long long moves;
        if(remaine == 0)
        {
            moves = remaine;
        }
        else
        {
            moves = b - remaine;
        }
        
        cout << moves << "\n";
    }
    return 0;
}
