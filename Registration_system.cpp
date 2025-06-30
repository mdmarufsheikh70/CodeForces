#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    unordered_map<string, int> A;
    for (int i = 0; i < n; i++) {
        string name = names[i];

        if (A.find(name) == A.end()) {
            cout << "OK" << endl;
            A[name] = 1;
        } else {
            cout << name << A[name] << endl;
            A[name + to_string(A[name])] = 1;
            A[name]++;
        }
    }

    return 0;
}
