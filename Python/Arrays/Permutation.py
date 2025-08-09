# Leetcode-46
# Time-Complexity-O(n!*n^2)
# Space-Complexity-O(n!*n)

class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums)==0:
            return [[]]
        permus=self.permute(nums[1:])
        res=[]
        for p in permus:
            for i in range(len(p)+1):
                p_copy=p.copy()
                p_copy.insert(i,nums[0])
                res.append(p_copy)
        return res