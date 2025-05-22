#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    string s;
    cin >> s;
    int counts = 0;
    for(int i = 0; i < s.length(); i++) {
        for(int j = 0; j < i; j++) {
            if(s[i] != s[j]) {
                counts++;
            }
        }
    }

    cout << counts << endl;

    if(counts % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout <<"CHAT WITH HER!" << endl;
    }
    return 0;
}