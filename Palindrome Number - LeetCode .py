class Solution:
    def isPalindrome(self, x: int) -> bool:
        sign = -1 if x < 0 else 1

        if sign == -1 :
            return False
        
        num = x
        reverse = 0
        while x != 0 :
            last_digit = x % 10
            reverse = reverse * 10 + last_digit
            x = x // 10

        if reverse == num :
            return True
        else:
            return False
