#Time-Complexity-O(m*n)
#Space-Complexity-O(n)
from typing import List

class Solution:
    def numSubmat(self, mat: List[List[int]]) -> int:
        rows = len(mat)
        cols = len(mat[0])
        heights = [0] * cols
        total = 0
        
        for i in range(rows):
            # Update heights for histogram
            for j in range(cols):
                if mat[i][j] == 1:
                    heights[j] += 1
                else:
                    heights[j] = 0
            
            total += self.countRectangles(heights)
        
        return total

    def countRectangles(self, heights: List[int]) -> int:
        stack = []
        count = 0
        curr_sum = [0] * len(heights)
        
        for i, h in enumerate(heights):
            while stack and heights[stack[-1]] >= h:
                stack.pop()
            
            if stack:
                prev_index = stack[-1]
                curr_sum[i] = curr_sum[prev_index] + h * (i - prev_index)
            else:
                curr_sum[i] = h * (i + 1)
            
            stack.append(i)
            count += curr_sum[i]
        
        return count
