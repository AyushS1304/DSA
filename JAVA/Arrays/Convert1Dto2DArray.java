//Optimized solution to convert a 1D array into a 2D array
// Solved by Iterating through the original array and filling the 2D array
// Time Complexity: O(m*n)
// Space Complexity: O(m*n) (for the 2D array)

class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        if(m*n!=original.length){
            return new int[0][0];
        }
        int result[][]=new int[m][n];
        int index=0;
        for(int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                result[i][j]=original[index];
                index++;
            }
        }
        return result;
    }
}