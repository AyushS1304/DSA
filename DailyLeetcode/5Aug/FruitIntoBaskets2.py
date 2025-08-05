class Solution:
    def numOfUnplacedFruits(self, fruits: List[int], baskets: List[int]) -> int:
        unplaced=0
        n=len(baskets)
        is_used=[False]*n

        for fruit in fruits:
            is_placed = False
            for j in range(0,len(baskets),1):
                if fruit <= baskets[j] and not is_used[j]:
                    is_placed=True
                    is_used[j]=True
                    break

            if(is_placed==False):
                unplaced+=1

        return unplaced
