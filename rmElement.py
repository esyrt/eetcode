#coding=utf8
#!/bin/python
# Program: Remove Element 
# Given an array and a value, remove all instances of that value in place and return the new length.
# The order of elements can be changed. It doesn't matter what you leave beyond the new length.

# 		
# History:
# Date:  2014/08/12 09:36:14

class Solution:
    # @param    A       a list of integers
    # @param    elem    an integer, value need to be removed
    # @return an integer
    def removeElement(self, A, elem):
        countnum = A.count(elem)
        for k in range(0, countnum):
            A.remove(elem)
        
        return len(A)
