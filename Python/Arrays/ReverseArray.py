# Time -Complexity-O(n)
# Space Complexity-O(1)
# Two Pointer Approach

class Solution:
    def reverseArray(self, arr):
        n=len(arr)
        i=0
        j=n-1
        while i <= j:
            arr[i],arr[j]=arr[j],arr[i]
            i=i+1
            j=j-1
        return arr
            
        
        
        