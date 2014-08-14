#coding=utf8
#!/bin/python
# Program: Given a non-negative number represented as an array of digits, plus one to the number.
# The digits are stored such that the most significant digit is at the head of the list.
# 		
# History:
# Date:  2014/08/13 11:08:45

class Solution:
    # @param digits, a list of integer digits
    
    # @return a list of integer digits
    
    def plusOne(self, digits):
        for k in range(len(digits)-1, -1, -1):
            digits[k] = (digits[k]+1)%10
            if digits[k] != 0:
                break
        else:
            digits.insert(0,1)
                
        return digits





