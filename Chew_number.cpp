#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string s;
    cin >> s;

    vector<int> A;
    for (int i = 0; i < (int)s.length(); i++)
    {
        int digit = s[i] - '0';
        int inverted = 9 - digit;

        if (i == 0) {
            if (inverted < digit && inverted != 0) {
                A.push_back(inverted);
            }
            else {
                A.push_back(digit);
            }
        }
        else {
            if (inverted < digit) {
                A.push_back(inverted);
            }
            else {
                A.push_back(digit);
            }
        }
    }

    for (int i = 0; i < (int)A.size(); i++) {
        cout << A[i];
    }
    return 0;
}
