class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        input_count = self.countdigits(n)  # Digit count of input number
        for i in range(31):  # Powers of 2 up to 2^30
            power = 1 << i
            power_count = self.countdigits(power)
            if self.booleanMatch(input_count, power_count):
                return True
        return False
    
    def booleanMatch(self, a: list, b: list) -> bool:
        return a == b  # Lists match if digit counts are identical
        
    def countdigits(self, n: int) -> list:
        count = [0] * 10
        while n > 0:
            count[n % 10] += 1
            n //= 10
        return count
