#Time-Complexity-O(n*m)
#Space-Complexity-o(1)
class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        top = float('inf')
        bottom = float('-inf')
        left = float('inf')
        right = float('-inf')

        rows = len(grid)
        columns = len(grid[0])

        for i in range(rows):
            for j in range(columns):
                if grid[i][j] == 1:
                    top = min(top, i)
                    bottom = max(bottom, i)
                    left = min(left, j)
                    right = max(right, j)

        if top == float('inf'):
            return 0

        return (bottom - top + 1) * (right - left + 1)