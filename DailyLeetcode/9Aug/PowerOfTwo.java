//Solved using Bit Manipulation
//Time Complexity: O(1)
//Space Complexity: O(1)
class Solution {
    public boolean isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
}