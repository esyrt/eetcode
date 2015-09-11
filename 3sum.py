#coding=utf8
#!/bin/python
# Program:
# 		
# Date:  2014/05/13 18:13:00


'''
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? 
Find all unique triplets in the array which gives the sum of zero.

Note:
    Elements in a triplet (a,b,c) must be in non-descending order. (ie, a ≤ b ≤ c)
    The solution set must not contain duplicate triplets.
        For example, given array S = {-1 0 1 2 -1 -4},

            A solution set is:
                    (-1, 0, 1)
                        (-1, -1, 2)
'''

class Solution:
    # @return a list of lists of length 3, [[val1,val2,val3]]
    def threeSum(self, num):        
        num.sort()
        ans = []
        for i in range(0, len(num)):
            if (i > 0 and num[i] == num[i-1]):
                #skip identical num
                continue
            left, right = i+1, len(num)-1
            while left < right:
                sum = num[left] + num[i] + num[right]
                if sum == 0:
                    ans.append([num[left], num[i], num[right]])
                    while left < right and num[left] == num[left+1]: left = left+1
                    while left < right and num[right] == num[right-1]: right = right-1
                    left, right = left+1, right-1
                elif sum < 0:
                    left = left+1
                elif sum > 0:
                    right = right-1
        return ans
