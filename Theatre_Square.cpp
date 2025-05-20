#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    optimize();
    long long int n, m, a;
    cin >> n >> m >> a;
    int result_1 = (n + a - 1) / a;
    int result_2 = (m + a - 1) / a;
    
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;
    return 0;
}