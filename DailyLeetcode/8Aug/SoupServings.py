class Solution:
    def __init__(self):
        self.serves = [(100, 0), (75, 25), (50, 50), (25, 75)]
        self.t = []

    def prob_A(self, A, B):
        if A <= 0 and B <= 0:  # both empty
            return 0.5
        if A <= 0:  # A empty first
            return 1.0
        if B <= 0:  # B empty first
            return 0.0
        if self.t[A][B] != -1:
            return self.t[A][B]

        prob = 0.0
        for probA, probB in self.serves:
            prob += self.prob_A(A - probA, B - probB)

        self.t[A][B] = 0.25 * prob
        return self.t[A][B]

    def soupServings(self, n):
        if n >= 5000:  # optimization for large n
            return 1.0
        self.t = [[-1] * (n + 1) for _ in range(n + 1)]
        return self.prob_A(n, n)
