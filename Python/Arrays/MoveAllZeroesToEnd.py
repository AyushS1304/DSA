#Time COmplexity-O(n^2)
# Space Complexity-O(1)
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = 0
        count = len(nums)
        while i < count:
            if nums[i] == 0:
                nums.pop(i)
                nums.append(0)
                count -= 1  
            else:
                i += 1
        