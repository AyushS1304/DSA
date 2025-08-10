//Solved using Sorting
//This solution checks if the digits of the number can be rearranged to form a power of two.
//Time Complexity: O(n log n)
//Space Complexity: O(1)
class Solution {
    public boolean reorderedPowerOf2(int n) {
        String target = sortedString(n);
        for (int i = 0; i < 31; i++) {
            if (sortedString(1 << i).equals(target)) return true;
        }
        return false;
    }
    private String sortedString(int x) {
        char[] arr = String.valueOf(x).toCharArray();
        Arrays.sort(arr);
        return new String(arr);
    }
}