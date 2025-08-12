// Time Complexity: O(n * log n)
// Space Complexity: O(n)
// Solved using dynamic programming
// This solution counts the number of ways to express a number as the sum of powers of integers
class Solution {
    private static final int MOD = 1_000_000_007;
    public int numberOfWays(int n, int x) {
        long[] dp = new long[n + 1];
        dp[0] = 1; 
        for (int i = 1; Math.pow(i, x) <= n; i++) {
            int power = (int) Math.pow(i, x);
            for (int sum = n; sum >= power; sum--) {
            dp[sum] = (dp[sum] + dp[sum - power]) % MOD;
            }
        } return (int) dp[n];
    }
}