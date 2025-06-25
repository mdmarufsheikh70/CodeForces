#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    long long int n;
    cin >> n;

    int results_1;
    int results_2;
    int results_3;
    int results_4;
    int results_5;

    results_1 = n / 100;
    n = n % 100;
    results_2 = n / 20;
    n = n % 20;
    results_3 = n / 10;
    n = n % 10;
    results_4 = n / 5;
    n = n % 5;
    results_5 = n / 1;

    cout << results_1 + results_2 + results_3 + results_4 + results_5 << endl;

    return 0;
}