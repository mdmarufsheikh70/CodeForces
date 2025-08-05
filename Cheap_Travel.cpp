#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int results_1 = (a / b);
    int results_2 = results_1 * d;
    int results_3 = results_1 * b;
    int results_4 = a - results_3;
    int results_5;

    if ((results_4 * c) < d)
    {
        results_5 = results_4 * c;
    }
    else
    {
        results_5 = d;
    }

    int total_special_mixed = results_2 + results_5;
    int total_single = a * c;

    cout << min(total_single, total_special_mixed) << endl;

    return 0;
}
