//brute force (using two loops)
//Time Complexity :O(n^2)
//Space Complexity :O(1)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return null;
    }
}

// Optimal Solution
// Time Complexity : O(n)
// Space Complexity : O(n)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numMap; // map for {element,index of array}
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end())
            {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        // In case there is no solution, we'll just return an empty vector
        return {};
    }
};