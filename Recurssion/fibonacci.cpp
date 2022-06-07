#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define IOS ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl "\n"

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    cout << fibo(n - 1) + fibo(n - 2) << " ";
}

int main()
{
    int n;
    cin >> n;
    fibo(n);
    // cout << ans << nl;
    // return 0;
}
