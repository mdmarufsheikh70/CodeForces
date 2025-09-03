#include <bits/stdc++.h>
using namespace std;

int manualGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int n, m;
    cin >> n >> m;

    int highest = max(n, m);
    int results = 7 - highest;
    int total = 6;

    int g = manualGCD(results, total);
    cout << results / g << "/" << total / g << "\n";

    return 0;
}