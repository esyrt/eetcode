#coding=utf8
#!/bin/python
# Program: Next Permutation
# Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
# If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).
# The replacement must be in-place, do not allocate extra memory.
# Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.
# 1,2,3 → 1,3,2
# 3,2,1 → 1,2,3
# 1,1,5 → 1,5,1
# 		
# History:
# Date:  2014/08/12 09:55:07


class Solution:
    # @param num, a list of integer
    # @return a list of integer
    def nextPermutation(self, num):
        tail = len(num)-1
        patnumkey = None
        changenumkey = None
        for k in range(len(num)-2, -1, -1):
            if (num[k] < num[k+1]):
                patnumkey = k
                break
        if patnumkey == None:
            num.reverse()
            return num

        for k in range(len(num)-1, patnumkey, -1):
            if (num[k] > num[patnumkey]):
                changenumkey = k
                break

        num[changenumkey], num[patnumkey] = num[patnumkey], num[changenumkey]

        for k in range(0, (len(num)-patnumkey)/2):
            num[k+patnumkey+1], num[len(num)-k-1] = num[len(num)-k-1], num[k+patnumkey+1]
            
        return num

