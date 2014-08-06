#coding=utf8
#!/bin/python
# Program: Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.
# For example, given array S = {-1 2 1 -4}, and target = 1.  The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
# History:
# Date:  2014/08/06 14:41:46


class Solution:
    # @return an integer
    def threeSumClosest(self, num, target):
        num.sort()
        minsum = none
        for i in range(0, len(num)):
            left, right = i+1, len(num)-1
            while left < right:
                sum = num[i] + num[left] + num[right]
                if minsum == none or abs(minsum - target) > abs(sum - target):
                    minsum = sum
                if sum <= target:
                    left = left+1
                else:
                    right = right-1
        return minsum

