# Time-Complexity-O(logn)
# Space-Complexity-O(1)
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        n=len(nums)
        l=0
        r=n-1
        while l<=r:
            m=(l+r)//2
            if target == nums[m]:
                return m
            elif target > nums[m]:
                l=m+1
            else:
                r=m-1
        if nums[m]<target:
            return m+1
        else:
            return m
        
