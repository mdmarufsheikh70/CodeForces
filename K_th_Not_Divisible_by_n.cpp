// #include <bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//        int counts = 0;
//        int number = 1;
//        while(counts != k)
//        {
//             if(number % n != 0)
//             {
//                 number++;
//                 counts++;
//             }
//             else
//             {
//                 number++;
//             }
//        }

//        cout << number - 1 << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans;
        if (k % (n - 1) == 0)
        {
            ans = (k / (n - 1)) * n - 1;
        } 
        else
        {
            ans = (k / (n - 1)) * n + (k % (n - 1));
        } 
        cout << ans << "\n";
    }
}
