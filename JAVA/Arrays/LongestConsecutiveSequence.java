// Solved using Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)
import java.util.Arrays;

class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) return 0;
        Arrays.sort(nums); 
        int longest = 1; 
        int currentStreak = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] == nums[i - 1] + 1) {
                currentStreak++;
            } else {
                longest = Math.max(longest, currentStreak);
                currentStreak = 1;
            }
        }
        longest = Math.max(longest, currentStreak);
        return longest;
    }
}
