//optimal
//time complexity:O(nlogn)
//space complexity:O(n)
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums = arr;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int n = nums.size();
        int rank = 1;
        for (int i = 0; i < n; i++) {

            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = rank++;
            }
        }
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};