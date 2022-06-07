#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define IOS ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl "\n"

void fibo(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        fibo(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << "0 "
         << "1"
         << " ";
    fibo(n - 2);
    return 0;
}
