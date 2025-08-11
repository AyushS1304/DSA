# Time-Complexity-O(n)
# Space-Complexity-O(n)
# Leetcode-739
from typing import List

class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        ans = [0] * n
        stack = []  # Will store indices

        for i in range(n - 1, -1, -1):
            # Pop all colder or equal days from the stack
            while stack and temperatures[i] >= temperatures[stack[-1]]:
                stack.pop()

            # If stack is not empty, next warmer day is at stack[-1]
            if stack:
                ans[i] = stack[-1] - i

            # Push this day's index onto stack
            stack.append(i)

        return ans
