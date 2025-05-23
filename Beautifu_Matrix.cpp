// #include<bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main() {
//     optimize ();
//     vector<int> matrixs(25);
//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 5; j++) {
//             cin >> matrixs[i*5 + j];
//         }
//     }

//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 5; j++) {
//             cout << matrixs[i*5 + j];
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std; 
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    vector<vector<int>> matrixs(6, vector<int>(6));

    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            cin >> matrixs[i][j];
        }
    }

    int moves = 0;

    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            if(matrixs[i][j] == 1) {
                if(i <= 3) {
                    moves = moves + (3 - i);
                } else {
                    moves = moves + (i - 3);
                }
                if(j <= 3) {
                    moves = moves + (3 - j);
                } else {
                    moves = moves + (j - 3);
                }
            }

            // cout << matrixs[i][j];
        }
    }

    cout << moves << endl;

    return 0;
}