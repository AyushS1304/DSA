// Reverse an array in place
//Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
    public void reverseArray(int arr[]) {
        int n=arr.length;
        for(int i=0;i<n/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
    }
}




//Optimal Solution using Two Pointer
//Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
    
    static void reverseArray(int[] arr) {
        int left = 0, right = arr.length - 1;
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}
