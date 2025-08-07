class Solution:
    def __init__(self):
        self.n = 0
        self.t = []

    def child1collect(self, fruits):
        cnt = 0
        for i in range(self.n):
            cnt += fruits[i][i]
        return cnt

    def child2collect(self, i, j, fruits):
        if i >= self.n or j < 0 or j >= self.n:
            return 0
        if i == self.n - 1 and j == self.n - 1:
            return 0
        if i == j or i > j:
            return 0
        if self.t[i][j] != -1:
            return self.t[i][j]

        bottom_left = fruits[i][j] + self.child2collect(i + 1, j - 1, fruits)
        bottom_down = fruits[i][j] + self.child2collect(i + 1, j, fruits)
        diagonal = fruits[i][j] + self.child2collect(i + 1, j + 1, fruits)

        self.t[i][j] = max(bottom_left, bottom_down, diagonal)
        return self.t[i][j]

    def child3collect(self, i, j, fruits):
        if i >= self.n or j < 0 or j >= self.n:
            return 0
        if i == self.n - 1 and j == self.n - 1:
            return 0
        if i == j or i < j:
            return 0
        if self.t[i][j] != -1:
            return self.t[i][j]

        top_right = fruits[i][j] + self.child3collect(i - 1, j + 1, fruits)
        right = fruits[i][j] + self.child3collect(i, j + 1, fruits)
        diagonal = fruits[i][j] + self.child3collect(i + 1, j + 1, fruits)

        self.t[i][j] = max(top_right, right, diagonal)
        return self.t[i][j]

    def maxCollectedFruits(self, fruits):
        self.n = len(fruits)
        self.t = [[-1] * self.n for _ in range(self.n)]

        c1 = self.child1collect(fruits)
        c2 = self.child2collect(0, self.n - 1, fruits)
        self.t = [[-1] * self.n for _ in range(self.n)]  # reset for child3
        c3 = self.child3collect(self.n - 1, 0, fruits)

        return c1 + c2 + c3
