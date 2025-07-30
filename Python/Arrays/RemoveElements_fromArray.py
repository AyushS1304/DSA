#time complexity-O(n)
# space complexity-O(1)
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        n=len(nums)
        i=0
        j=n-1
        count_swap=0
        for i in range(len(nums)):
            if nums[i]==val:
                count_swap+=1
        i=0
        while i < j:
            while nums[i]!=val and i<j:
                i+=1
            while nums[j]==val and i<j:
                j-=1
            while i >= j:
                break
            nums[i],nums[j]=nums[j],nums[i]
        return n-count_swap


        