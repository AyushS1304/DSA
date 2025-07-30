#space complexity-O(n)
#time-Complexity-O(n)
class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        num_rank={}
        sorted_arr=sorted(arr)
        rank=1
        for i in range(len(sorted_arr)):
            if i>0 and sorted_arr[i]>sorted_arr[i-1]:
                rank+=1
            num_rank[sorted_arr[i]]=rank
        for i in range(len(arr)):
            arr[i]=num_rank[arr[i]]
        return arr