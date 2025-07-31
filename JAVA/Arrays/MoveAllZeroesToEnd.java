
// Java program to move all zeroes to the end of an array
//Optimal Approach(using two pointers)
// LeetCode 283: Move Zeroes
//Time Complexity: O(n)
//Space Complexity: O(1)
class Solution {
    void pushZerosToEnd(int[] arr) {
        int count=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=0){
                arr[count]=arr[i];
                count++;
            }
        }
        while(count<arr.length){
            arr[count]=0;
            count++;
        }
        // code here
    }
}




//Naive Approach(using extra space)
// Time Complexity: O(n)
// Space Complexity: O(n)
// Java Program to move all zeros to end using temporary array

import java.util.Arrays;

class Solution {
    
    // function to move all zeros to the end
    static void pushZerosToEnd(int[] arr) {
        int n = arr.length;
        int[] temp = new int[n];

        // to keep track of the index in temp[]
        int j = 0;

        // Copy non-zero elements to temp[]
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0)
                temp[j++] = arr[i];
        }

        // Fill remaining positions in temp[] with zeros
        while (j < n)
            temp[j++] = 0;

        // Copy all the elements from temp[] to arr[]
        for (int i = 0; i < n; i++)
            arr[i] = temp[i];
    }
}
