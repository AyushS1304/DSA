from collections import defaultdict

class Solution:
    def totalFruit(self, fruits):
        n = len(fruits)
        l = 0
        r = 0
        max_len = 0
        fruit_count = defaultdict(int)  # works like unordered_map

        while r < n:
            fruit_count[fruits[r]] += 1

            while len(fruit_count) > 2:
                fruit_count[fruits[l]] -= 1
                if fruit_count[fruits[l]] == 0:
                    del fruit_count[fruits[l]]
                l += 1

            max_len = max(max_len, r - l + 1)
            r += 1

        return max_len
