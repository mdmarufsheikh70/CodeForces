#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slices = c * d;
    int total_salt = p;

    int toasts_by_drink = total_drink / (n * nl);
    int toasts_by_limes = total_slices / n;
    int toasts_by_salt = total_salt / (n * np);

    int arr[3] = {toasts_by_drink, toasts_by_limes, toasts_by_salt};

    int result = arr[0];
    for (int i = 1; i < 3; i++)
    {
        if (arr[i] < result)
            result = arr[i];
    }

    cout << result << endl;

    return 0;
}
