//Optimzed Approach(Two Passes)
// Find the second largest element in an array
//Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
    public int getSecondLargest(int[] arr) {
        int n=arr.length;
        int largest = -1, secondlargest=-1;;        
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }            
        }
        for(int i=0;i<n;i++){
            if(arr[i] > secondlargest && arr[i] != largest){
                secondlargest=arr[i];
            }
        }
        return secondlargest;
    }
}





//Naive Approach
// using Sorting
//Time Complexity: O(n log n)
// Space Complexity: O(1)
import java.util.Arrays;

class Solution{
    static int getSecondLargest(int[] arr) {
        int n = arr.length;
        Arrays.sort(arr);        
        for (int i = n - 2; i >= 0; i--) {           
            if (arr[i] != arr[n - 1]) {
                return arr[i];
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = { 12, 35, 1, 10, 34, 1 };
        System.out.println(getSecondLargest(arr));
    }
}




//Optimized Approach (Single Pass)
// Find the second largest element in an array 
//Time Complexity: O(n)
// Space Complexity: O(1)
import java.util.Arrays;

class Solution{

    static int getSecondLargest(int[] arr) {
        int n = arr.length;
        int largest = -1, secondLargest = -1;
        for (int i = 0; i < n; i++) {
            if(arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
}