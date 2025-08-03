from bisect import bisect_left, bisect_right

class Solution:
    def maxTotalFruits(self, fruits, startPos, k):
        n = len(fruits)
        
        # Build positions and prefix sum arrays
        positions = [pos for pos, _ in fruits]
        prefixsum = [0] * n
        prefixsum[0] = fruits[0][1]
        for i in range(1, n):
            prefixsum[i] = prefixsum[i - 1] + fruits[i][1]

        maxfruit = 0

        for d in range(k // 2 + 1):
            # Case 1: Move left then right
            remain = k - 2 * d
            i = startPos - d
            j = startPos + remain

            left = bisect_left(positions, i)
            right = bisect_right(positions, j) - 1

            if left <= right:
                total = prefixsum[right] - (prefixsum[left - 1] if left > 0 else 0)
                maxfruit = max(maxfruit, total)

            # Case 2: Move right then left
            i = startPos - remain
            j = startPos + d

            left = bisect_left(positions, i)
            right = bisect_right(positions, j) - 1

            if left <= right:
                total = prefixsum[right] - (prefixsum[left - 1] if left > 0 else 0)
                maxfruit = max(maxfruit, total)

        return maxfruit
