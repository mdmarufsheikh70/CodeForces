// #include <bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();
//     int n;
//     cin >> n;

//     vector<int> A(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     int max = 0;
//     int min = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (A[max] < A[i])
//         {
//             max = i;
//         }
//         if (A[min] > A[i])
//         {
//             min = i;
//         }
//     }

//     int counts = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (A[0] == A[max] && A[A.size() - 1] == A[min])
//             {
//                 cout << counts << endl;
//                 return 0;
//             }
//             else
//             {
//                 if (A[j] < A[j + 1])
//                 {
//                     int temp = A[j + 1];
//                     A[j + 1] = A[j];
//                     A[j] = temp;
//                     counts++;
//                 }
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int max_index = 0;
    int min_index = n - 1;

    for (int i = 1; i < n; i++) {
        if (A[i] > A[max_index]) {
            max_index = i;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (A[i] < A[min_index]) {
            min_index = i;
        }
    }

    int result = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        result -= 1;
    }

    cout << result << endl;
    return 0;
}

