# Time -Complexity-O(n)
# Space Complexity-O(1)

# import math

# class Solution:
#     def isPerfectSquare(self, num: int) -> bool:
#         root = math.isqrt(num)
#         return root * root == num
    
# Time-Complexity-O(logn)
# Space Complexity-O(1)
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num<0:
            return False
        l,h=0,num
        while(l<=h):
            mid=(l+h)//2
            s=mid*mid
            if s==num:
                return True
            elif s<num:
                l=mid+1
            else:
                h=mid-1
        return False