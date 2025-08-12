class Solution:
    def __init__(self):
        self.M = 10**9 + 7
        self.t = [[-1] * 301 for _ in range(301)]  # memoization table

    def solve(self, n, num, x):
        if n == 0:
            return 1
        if n < 0:
            return 0
        if pow(num, x) > n:
            return 0
        if self.t[n][num] != -1:
            return self.t[n][num]
        
        take = self.solve(n - pow(num, x), num + 1, x)
        skip = self.solve(n, num + 1, x)
        
        self.t[n][num] = (take + skip) % self.M
        return self.t[n][num]

    def numberOfWays(self, n, x):
        # Reset memo table for each call
        self.t = [[-1] * 301 for _ in range(301)]
        return self.solve(n, 1, x)