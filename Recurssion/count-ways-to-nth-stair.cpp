// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        if (n == 1 || n == 2)
        {
            return n;
        }
        int p = countWays(n - 1);
        int q = countWays(n - 2);

        int ans = p + q;
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends