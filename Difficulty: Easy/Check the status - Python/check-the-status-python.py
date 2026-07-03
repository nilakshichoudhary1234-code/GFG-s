class Solution:
    def checkStatus(self, a: int, b: int, flag: bool) -> bool:
        # Case 1: Both a and b are negative and flag is True
        if flag:
            return a < 0 and b < 0
        
        # Case 2: Either a or b (not both) is non-negative and flag is False
        else:
            return (a >= 0 and b < 0) or (a < 0 and b >= 0)