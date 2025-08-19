// Solved using a single pass approach
//Time Complexity: O(n)
//Space Complexity: O(1)
class Solution {
    public long zeroFilledSubarray(int[] nums) {
        long count=0, ans=0;
        for(int num: nums){
            ans= (num ==0)? ans +1 :0;
            count+=ans;
        }
        return count;
    }
}