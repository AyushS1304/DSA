//Optimal Solution
// Time Complexity: O(n)
// Space Complexity: O(1)
//algo used Kadane Algorithm
class Solution{
    public:
        int maxSubArray(vector<int>&nums){
            int cursum=0;
            int maxsum=INT_MIN;
            for(auto num:nums){
                cursum=max(num,cursum+num); //find which subarray has max
                maxsum=max(maxsum,cursum); //max sum
            }
        }
        return maxsum;
}