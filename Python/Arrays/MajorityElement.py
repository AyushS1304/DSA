#time complexity-O(n)
#space Complexity-O(1)

from collections import Counter
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        counter=Counter(nums)
        for num,freq in counter.items():
            if freq>(len(nums)/2):
                return num
        return -1
        