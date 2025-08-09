# TIme-Complexity-O(n)
# Space Complexity-O(1)
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n<1:
            return False

        x=1
        while x<n:
            x=x*2
        return x==n
        