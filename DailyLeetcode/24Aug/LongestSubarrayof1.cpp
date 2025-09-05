// Time Complexity:O(n)
// Space Complexity:O(n)
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int r = 0;
        int l = 0;
        int maxl = INT_MIN;
        unordered_map<int, int> mp;
        while (r < n) {
            mp[nums[r]]++;

            while (mp[0] > 1) {
                mp[nums[l]]--;

                l++;
            }
            maxl = max(maxl, r - l);
            r++;
        }
        return maxl;
    }
};