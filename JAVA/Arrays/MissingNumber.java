//Basic Approach
// Time Complexity: O(nlogn)
// Space Complexity: O(1)
import java.util.Arrays;

class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        if (nums[0] != 0) return 0;
        if (nums[n - 1] != n) return n;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != i) return i;
        }        
        return 0;
    }
}

//Optimal Solution
//Time Complexity=O(n)
//Space Complexity=O(1)
import java.util.Arrays;
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int Tsum = (n * (n + 1)) / 2;
        int actualSum = Arrays.stream(nums).sum();
        return Tsum - actualSum;
    }
}


////Optimal Solution using XOR
//Time Complexity: O(n)
//Space Complexity: O(1)
class Solution {
    public int missingNumber(int[] nums) {
        int xor = 0;
        for (int i = 0; i < nums.length; i++) {
            xor ^= nums[i];
            xor ^= i;
        }
        return xor ^ nums.length;
    }
}
