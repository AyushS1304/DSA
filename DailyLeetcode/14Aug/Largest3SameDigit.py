# Time-Complexity-O(n)
# Space-Complexity-O(n)
from collections import Counter
from typing import List
class Solution:
    def largestGoodInteger(self, num: str) -> str:
        triplet=[]
        for i in range(len(num)-2):
            if num[i]==num[i+1]==num[i+2]:
                triplet.append(num[i:i+3])
        if not triplet:
            return ""
        counter=Counter(triplet)
        return max(counter.keys())
                

