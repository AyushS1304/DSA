// Time Complexity: O(1)
// Space Complexity: O(1)

class Solution {
    public long flowerGame(int n, int m) {
        long oddX=(n+1)/2;
        long evenX=n/2;
        long oddY=(m+1)/2;
        long evenY=m/2;
        return oddX*evenY+evenX*oddY;
    }
}