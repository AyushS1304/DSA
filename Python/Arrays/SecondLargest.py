# Time-Complexity-O(n)
# Space Complexity-O(1)
class Solution:
    def getSecondLargest(self, arr):
        n=len(arr)
        if n<2:
            return -1
        first=second=-234567
        for num in arr:
            if num>first:
                second=first
                first=num
            elif num>second and num!=first:
                second=num
        if second==-234567:
            return -1
        else:
            return second