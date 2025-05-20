#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);
    vector<int> z(n);
    
    int solve = 0;
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
        if((x[i] + y[i] + z[i]) >= 2) {
            solve++;
        }
    }

    cout << solve <<endl;
    
    return 0;
}