class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1
        x= abs(x)
        reverse = 0
        while x != 0 :
            last_digit = x % 10
            reverse = reverse * 10 + last_digit
            x = x // 10 # to cut off the last digit

        reverse = reverse * sign
        if -2**31 < reverse < 2**31 - 1 :
            return reverse
        else:
            return 0




        




