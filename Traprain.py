#coding=utf8
#!/bin/python
# Program: Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
# Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.
# 		
# History:
# Date:  2014/08/13 10:41:21




class Solution:
        
    # @param A, a list of integers
    
    # @return an integer
    
    def trap(self, A):
        maxleft = [0]*len(A)
        maxright = [0]*len(A)
        trapsize = 0
        
        for k in range(1, len(A)):
            maxleft[k] = max(maxleft[k-1], A[k-1])
            maxright[len(A)-k-1] = max(maxright[len(A)-k], A[len(A)-k])
            
        for k in range(1, len(A)):
            if min(maxleft[k], maxright[k]) > A[k]:
                trapsize = trapsize + min(maxleft[k],maxright[k]) - A[k]
                    
        return trapsize


