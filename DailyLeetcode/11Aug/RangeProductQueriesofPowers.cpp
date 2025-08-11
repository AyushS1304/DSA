// Time complexity: O(q×logn)
// Space complexity: O(logn)
class Solution
{
public:
    int mod = 1e9 + 7;
    // decompose powers
    vector<int> power(int n)
    {
        int rep = 1;
        vector<int> res;
        while (n)
        {
            if (n % 2 == 1)
            {
                res.push_back(rep);
            }
            n /= 2;
            rep *= 2;
        }
        return res;
    }
    vector<int> productQueries(int n, vector<vector<int>> &queries)
    {
        // direct calculation
        vector<int> p = power(n);
        vector<int> result;
        for (auto it : queries)
        {
            int ans = 1;
            int st = it[0];
            int en = it[1];
            for (int i = st; i <= en; i++)
            {
                ans = (long long)ans * p[i] % mod;
            }
            result.push_back(ans);
        }
        return result;
    }
};