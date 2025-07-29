#time Complexity=O(n)
#Space Complexity=O(1)

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i=1
        for j in range(1,len(nums)):
            if nums[j]!=nums[i-1]:
                nums[i]=nums[j]
                i=i+1
        return i