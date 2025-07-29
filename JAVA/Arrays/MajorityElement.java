//Naive approach using sorting
import java.util.Arrays;
class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        return nums[nums.length/2];
    }
}

// Optimal Solution
// Time Complexity: O(n)    
// Space Complexity: O(1)
// This solution uses the Boyer-Moore Voting Algorithm
class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int Element = 0;        
        for (int num : nums) {
            if (count == 0) {
                Element = num;
            }           
            if (num == Element) {
                count++;
            } else {
                count--;
            }
        }      
        return Element;
    }
}