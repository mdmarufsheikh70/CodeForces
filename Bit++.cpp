#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    int n;
    cin >> n;

    vector<string> str(n);
    int counts = 0;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
        if(str[i] == "X++" || str[i] == "++X") {
            counts++;
        } else {
            counts--;
        }
        
    }

    cout << counts << endl;
    return 0;
}
