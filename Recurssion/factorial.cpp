#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define IOS ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl "\n"

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    fact(n);
    int ans = fact(n);
    cout << ans << nl;
    return 0;
}
