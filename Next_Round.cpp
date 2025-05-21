#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    int x, y;
    cin >> x >> y;
    vector<int>paticipent(x);
    int counts = 0;

    for(int i = 0; i < x; i++) {
        cin >> paticipent[i];
    }

    int threshold_score = paticipent[y - 1];

    for(int i = 0; i < x; i++) {
        if(paticipent[i] >= threshold_score && threshold_score > 0) {
            counts++;
        } else {
            counts += 0;
        }
    };
    cout << counts << endl;

    return 0;
}