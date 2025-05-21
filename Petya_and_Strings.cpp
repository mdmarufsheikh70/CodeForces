#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    string x, y, X, Y;
    cin >> x >> y;

    for(int i = 0; i < x.length(); i++) {
        X = toupper(x[i]);
        Y = toupper(y[i]);
    }

    if(X > Y) {
        cout << "1" << endl;
    }
    else if(Y > X) {
        cout << "-1" << endl;
    }
    else {
        cout << "0" <<endl;
    }
    return 0;
}