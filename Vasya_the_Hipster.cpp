// 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int different_pairs = min(a, b);
    int same_pairs = abs(a - b) / 2;

    cout << different_pairs << " " << same_pairs << endl;

    return 0;
}
