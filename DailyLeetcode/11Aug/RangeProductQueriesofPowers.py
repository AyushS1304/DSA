class Solution:
    def __init__(self):
        self.mod = int(1e9 + 7)

    # decompose powers
    def power(self, n):
        rep = 1
        res = []
        while n:
            if n % 2 == 1:
                res.append(rep)
            n //= 2
            rep *= 2
        return res

    def productQueries(self, n, queries):
        # direct calculation
        p = self.power(n)
        result = []
        for st, en in queries:
            ans = 1
            for i in range(st, en + 1):
                ans = (ans * p[i]) % self.mod
            result.append(ans)
        return result
