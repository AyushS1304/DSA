// Optimized Solution
// Time Complexity=O(n) for sliding window
// Space Complexity=O(1) as in map also we store max 2 elements
class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        int n = fruits.size();
        int l = 0; // left pointer
        int r = 0; // right pointer
        int maxl = 0;
        unordered_map<int, int> mp; // make a map  to track two distinct elements
        while (r < n)
        {
            mp[fruits[r]]++;
            while (mp.size() > 2)
            {
                mp[fruits[l]]--;
                if (mp[fruits[l]] == 0)
                { // if freq=0 delete from map
                    mp.erase(fruits[l]);
                }
                l++;
            }
            maxl = max(maxl, r - l + 1);
            r++;
        }
        return maxl;
    }
};