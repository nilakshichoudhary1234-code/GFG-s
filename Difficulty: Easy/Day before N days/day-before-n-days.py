class Solution:
    def findAnswer(self, d, n):
        # Subtract n from d and use modulo 7 to wrap around the 7-day week
        return (d - n) % 7