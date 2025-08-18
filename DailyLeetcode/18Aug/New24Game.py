#Time-Complexity-O(1)
# Space-Complexity-O(1)
from typing import List

class Solution:
    def judgePoint24(self, cards: List[int]) -> bool:
        nums = [float(c) for c in cards]
        return self.helper(nums)

    def helper(self, nums: List[float]) -> bool:
        n = len(nums)
        if n == 1:
            return abs(nums[0] - 24.0) < 1e-6

        for i in range(n):
            for j in range(i + 1, n):
                a, b = nums[i], nums[j]
                operations = self.calcOperations(a, b)
                nextRound = [nums[k] for k in range(n) if k != i and k != j]
                
                for o in operations:
                    nextRound.append(o)
                    if self.helper(nextRound):
                        return True
                    nextRound.pop()
        return False

    def calcOperations(self, a: float, b: float) -> List[float]:
        result = [a + b, a - b, b - a, a * b]
        if abs(b) > 1e-6:  
            result.append(a / b)
        if abs(a) > 1e-6: 
            result.append(b / a)
        return result
