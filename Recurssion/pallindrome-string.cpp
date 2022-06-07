// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int helper(string s, int start, int end)
    {
        if (start >= end)
        {
            return 1;
        }

        if (s[start] != s[end])
        {
            return 0;
        }

        return helper(s, start + 1, end - 1);
    }

    int isPalindrome(string s)
    {
        // Your code goes here
        int n = s.size() - 1;
        return helper(s, 0, n);
    }
};

// { Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;

        cout << ob.isPalindrome(s) << "\n";
    }

    return 0;
} // } Driver Code Ends