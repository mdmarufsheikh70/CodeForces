// #include<bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();

//     int n, m;
//     cin >> n >> m;

//     int sum = 0;
//     int counts = 0;

//     vector<int>A(n);
//     for(int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     int j = 0;
//     vector<int>B;
//     int t = n;
//     while (t--)
//     {
//         for(int i = j; i < n; i++)
//         {
//             sum+=A[i];
//             if(m >= sum)
//             {
//                 counts++;
//             }
//             else
//             {
//                 break;
//             }
//         }   
//         B.push_back(counts);
//         j++;
//         sum = 0;
//         counts = 0;
//     }

//     for(int i = 0; i < B.size(); i++)
//     {
//         cout << B[i];
//     }

//     int counts_max = *max_element(B.begin(), B.end());
//     cout << counts_max << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    int left = 0, sum = 0, maxBooks = 0;
    for (int right = 0; right < n; right++) {
        sum += A[right];
        while (sum > t) {
            sum -= A[left];
            left++;
        }
        maxBooks = max(maxBooks, right - left + 1);
    }
    cout << maxBooks << "\n";
}