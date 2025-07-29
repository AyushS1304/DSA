//Optimal Solution
// Time Complexity: O(n)
// Space Complexity: O(1)
//algo used Kadane Algorithm
public class MaximumSubArraySum {
    public int maxSubArray(int[] nums) {
        int maxSum = nums[0];
        int CurrSum = nums[0];
        for (int i = 1; i < nums.length; i++) {
            CurrSum = Math.max(nums[i], CurrSum + nums[i]);
            maxSum = Math.max(maxSum, CurrSum);
        }
        return maxSum;
    }
}

