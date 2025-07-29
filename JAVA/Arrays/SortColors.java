//Naive approach using Arrays.sort
import java.util.Arrays;
class Solution {
    public void sortColors(int[] nums) {
        Arrays.sort(nums);
        System.out.println(nums);
    }
}

// Optimal Solution
// Time Complexity: O(n)
// Space Complexity: O(1)
// This solution uses the Dutch National Flag problem approach
// to sort the array in a single pass.
class Solution {
    public void sortColors(int[] nums) {
        int low=0, mid=0, high=nums.length-1;
        while(mid<=high){
            if(nums[mid]==0){
                int tmp=nums[low];
                nums[low++]=nums[mid];
                nums[mid++]=tmp;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                int tmp=nums[mid];
                nums[mid]=nums[high];
                nums[high--]=tmp;
            }
        }
    }
}