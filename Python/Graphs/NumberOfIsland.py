# time-Complexity-O(n*m)
# space Complexity-O(n*m)

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m,n=len(grid),len(grid[0])
        def dfs(i,j):
            if i<0 or i>=m or j<0 or j>=n or grid[i][j]!="1":
                return 
            else:
                grid[i][j]="0"
                dfs(i,j+1)
                dfs(i+1,j)
                dfs(i,j-1)
                dfs(i-1,j)
        total_island=0
        for i in range(m):
            for j in range(n):
                if grid[i][j]=="1":
                    total_island+=1
                    dfs(i,j)
        return total_island