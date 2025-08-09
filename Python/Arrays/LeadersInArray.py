#Time-Complexity-O(n)
#Space-Complexity-O(n)
class Solution:
    def leaders(self, arr):
        n=len(arr)
        if n<1:
            return 
        max_from_right=arr[-1]
        leader_arr=[]
        leader_arr.append(max_from_right)
        for i in range(n-2,-1,-1):
            if arr[i]>=max_from_right:
                max_from_right=arr[i]
                leader_arr.append(arr[i])
        return leader_arr[::-1]
                        