#Time Complexity: O(n + m)
#Space Complexity: O(n + m)
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i=j=0
        merge_string=""
        len_word1=len(word1)
        len_word2=len(word2)
        while i<len_word1 and j<len_word2:
            merge_string+=word1[i] +word2[j]
            i=i+1
            j=j+1
        if i<len_word1:
            merge_string+=word1[i:]
        if i<len_word2:
            merge_string+=word2[j:]
        return merge_string
