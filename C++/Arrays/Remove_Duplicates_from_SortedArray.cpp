// Optimal Solution
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int j = 1; // to keep the pointer to bypass the duplicates
        for (int i = 1; i < n; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j] = nums[i];
                j++; // bypass the duplicates
            }
        }
    }
    return j; // return the size of the array without duplicates
}