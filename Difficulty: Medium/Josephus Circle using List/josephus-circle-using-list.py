class Solution:

    def lastRemaining(self, n: int, k: int) -> int:
        res = 0  # Base case J(1, k) = 0
        for i in range(2, n + 1):
            res = (res + k) % i
        return res + 1  # Convert 0-based to 1-based indexing