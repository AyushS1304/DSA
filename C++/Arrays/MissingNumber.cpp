//Optimal Solution
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int totalsum=(n*(n+1))/2; //formula for totalsum of n numbers
        int sum=0;
        for(auto num:nums){
            sum+=num;
        }
        return totalsum-sum;
    }
};