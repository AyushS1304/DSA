class Solution:
    def build(self, i, l, r, baskets, segmenttree):
        if l == r:
            segmenttree[i] = baskets[l]
            return
        mid = l + (r - l) // 2
        self.build(2 * i + 1, l, mid, baskets, segmenttree)
        self.build(2 * i + 2, mid + 1, r, baskets, segmenttree)
        segmenttree[i] = max(segmenttree[2 * i + 1], segmenttree[2 * i + 2])

    def queryst(self, i, l, r, segmenttree, fruit):
        if segmenttree[i] < fruit:
            return False
        if l == r:
            segmenttree[i] = -1  # mark as used
            return True
        mid = l + (r - l) // 2
        placed = False
        if segmenttree[2 * i + 1] >= fruit:
            placed = self.queryst(2 * i + 1, l, mid, segmenttree, fruit)
        else:
            placed = self.queryst(2 * i + 2, mid + 1, r, segmenttree, fruit)

        segmenttree[i] = max(segmenttree[2 * i + 1], segmenttree[2 * i + 2])
        return placed

    def numOfUnplacedFruits(self, fruits, baskets):
        n = len(fruits)
        segmenttree = [-1] * (4 * n)  # Initialize the segment tree
        self.build(0, 0, n - 1, baskets, segmenttree)

        unplaced = 0
        for fruit in fruits:
            if not self.queryst(0, 0, n - 1, segmenttree, fruit):
                unplaced += 1

        return unplaced
