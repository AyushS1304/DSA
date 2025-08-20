from typing import List

class Solution:
    def countSquares(self, matrix: List[List[int]]) -> int:
        rows = len(matrix)
        cols = len(matrix[0])
        dp = [[0] * cols for _ in range(rows)]
        count = 0
        for j in range(cols):#filling of the first row
            dp[0][j] = matrix[0][j]
            count += dp[0][j]
        for i in range(1, rows):#filling of the first column
            dp[i][0] = matrix[i][0]
            count += dp[i][0]
        for i in range(1, rows):#filling rest of the dp
            for j in range(1, cols):
                if matrix[i][j] == 1:
                    dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])
                else:
                    dp[i][j] = 0
                count += dp[i][j]
        
        return count
