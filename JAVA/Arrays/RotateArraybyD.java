//Time Complexity: O(n)
//Space Complexity: O(n)
//Solved using the reversal algorithm
//GFG: Rotate Array by D elements
//https://practice.geeksforgeeks.org/problems/rotate-array-by-d-elements-158711
class Solution {
    // Function to rotate an array by d elements in counter-clockwise direction.
    static void rotateArr(int arr[], int d) {
        int n=arr.length;
        d%=n;
        int temp[]=new int[n];
        for(int i=0;i<n-d;i++){
            temp[i]=arr[d+i];
        }
        for(int i=0;i<d;i++){
            temp[n-d+i]=arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
    }
}





//Naive Approach
//Time Complexity: O(n*d)
//Space Complexity: O(1)
// Java Program to left rotate the array by d positions
// by rotating one element at a time

import java.util.Arrays;

class GfG {
    
    // Function to left rotate array by d positions
    static void rotateArr(int[] arr, int d) {
        int n = arr.length;
        for (int i = 0; i < d; i++) {
            int first = arr[0];
            for (int j = 0; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = first;
        }
    }
}
