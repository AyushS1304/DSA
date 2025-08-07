# Time-Complexity-O(n)
# Space-Complexity-O(n)
# Leetcode Problem:560
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        res=0
        currSum=0
        PrefixSum={ 0:1 }
        for n in nums:
            currSum+=n
            diff=currSum-k
            res+=PrefixSum.get(diff,0)
            PrefixSum[currSum]=1+PrefixSum.get(currSum,0)
        return res        