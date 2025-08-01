//Leetcode Daily (1 aug)
// Time Complexity:O(numRows^2)
// Space Complexity:O(numRows^2)

class Solution
{
public:
    vector<int> generaterow(int row)
    {
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1);
        for (int col = 1; col < row; col++)
        {
            ans = ans * (row - col);   //formula for one row 
            ans = ans / col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++)
        {
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};