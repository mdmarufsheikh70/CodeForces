#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int LIMIT = 1e6 + 1;
vector<bool> isPrime(LIMIT, true);
unordered_set<long long> tPrimes;

void sieveTPrimes()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < LIMIT; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < LIMIT; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i < LIMIT; ++i)
    {
        if (isPrime[i])
        {
            tPrimes.insert(1LL * i * i);
        }
    }
}

int main()
{
    optimize();
    sieveTPrimes();
    
    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        cout << (tPrimes.count(x) ? "YES" : "NO") << '\n';
    }

    return 0;
}
