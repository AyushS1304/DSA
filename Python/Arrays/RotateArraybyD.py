# Time-Complexity-O(n)
# Space-Complexity-O(1)
class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n=len(nums)
        if k==0 or k%n==0:
            return 
        def reverse_arr(arr,start,end):
            while start<end:
                arr[start],arr[end]=arr[end],arr[start]
                start+=1
                end-=1
        k=k%n
        reverse_arr(nums,0,n-1)
        reverse_arr(nums,0,k-1)
        reverse_arr(nums,k,n-1)
        return nums