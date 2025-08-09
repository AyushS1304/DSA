# Time-Complexity-O(n)
# Space-Complexity=0(1)
from typing import List

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s = set(nums)
        sol = 0
        
        for i in s:
            if i - 1 not in s:
                n = i
                length = 0
                while n in s:
                    length += 1
                    n += 1
                sol = max(sol, length)
                
        return sol