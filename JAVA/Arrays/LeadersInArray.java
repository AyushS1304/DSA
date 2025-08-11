// Solved using Two Pointers
// This solution finds all leaders in an array, where a leader is defined as an element that is greater than or equal to all elements to its right.
// The algorithm iterates through the array from right to left, keeping track of the maximum element seen so far.
// Time Complexity: O(N)
// Space Complexity: O(N)
import java.util.ArrayList;
import java.util.Collections;
class Solution {
    static ArrayList<Integer> leaders(int[] arr) {
        ArrayList<Integer> result = new ArrayList<>();
        int n = arr.length;
        int maxRight = arr[n - 1];
        result.add(maxRight);
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxRight) {
                maxRight = arr[i];
                result.add(maxRight);
            }
        }
        Collections.reverse(result);

        return result;
    }
}
