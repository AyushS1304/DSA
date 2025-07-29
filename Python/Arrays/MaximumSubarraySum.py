class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr_max=0
        max_sum= float('-inf')
        n=len(nums)
        for i in range(n):
            curr_max+=nums[i]
            max_sum=max(max_sum,curr_max)
            if curr_max<0:
                curr_max=0
        return max_sum
        