//Naive Approach
// This solution uses a prefix sum array to count the number of subarrays with a given sum
// Time Complexity: O(n^2)
// Space Complexity: O(n)
class Solution {
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;
        int[] sum = new int[n];
        sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + nums[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (sum[i] == k) count++;
            for (int j = 0; j < i; j++) {
                if (sum[i] - sum[j] == k) {
                    count++;
                }
            }
        }

        return count;
    }
}