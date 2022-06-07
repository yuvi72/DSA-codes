#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define IOS ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl "\n"

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    IOS int n;
    cin >> n;
    int ans = sum(n);
    cout << ans << nl;
    return 0;
}
