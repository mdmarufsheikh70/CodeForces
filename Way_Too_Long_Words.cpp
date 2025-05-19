#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    int n;
    cin >> n;
    vector<string> strs(n);
    for(int i = 0; i < n; i++) {
        cin >> strs[i];
        cin.ignore();
    }
    string str;
    for(int j = 0; j < n; j++) {
        str = strs[j];
        if(str.length() > 10) {
        int len = str.length();
        cout << str[0] << len - 2 << str[str.length() - 1] << endl;
        } else {
            cout << str << endl;
        }
    }

    return 0;
}