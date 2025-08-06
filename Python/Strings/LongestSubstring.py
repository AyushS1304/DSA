# Time-Complexity-O(n)
# Space-Complexity-O(1)

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left=0
        longest=0
        n=len(s)
        sett=set()
        for right in range(n):
            while (s[right]) in sett:
                sett.remove(s[left])
                left +=1
            window=(right-left) +1
            longest=max(longest,window)
            sett.add(s[right])
        return longest
        
