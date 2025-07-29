# time complexity-O(n)
# Space Complexity-O(n)
# class Solution:
#     def missingNumber(self, nums: List[int]) -> int:
#         n=len(nums)
#         s=set(nums)
#         for num in range(n+1):
#             if num not in s:
#                 return num
            
#time Complexity-O(1)
#space complexity-O(1)
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        # s=set(nums)
        # for num in range(n+1):
        #     if num not in s:
        #         return num
        expected=(n*(n+1))//2
        return expected -sum(nums)