#coding=utf8
#!/bin/python
# Program: Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

#Elements in a quadruplet (a,b,c,d) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
#The solution set must not contain duplicate quadruplets.
# For example, given array S = {1 0 -1 0 -2 2}, and target = 0.
#    A solution set is:
#            (-1,  0, 0, 1)
#               (-2, -1, 1, 2)
#                  (-2,  0, 0, 2)
# History:
# Date:  2014/08/06 16:34:27

class Solution:
    # @return a list of lists of length 4, [[val1,val2,val3,val4]]
        def fourSum(self, num, target):
            num.sort()
            ans = []
            listset = set()
            if num.length() < 4:
                return ans

            cache = {}
            for i in range(0, len(num)):
                for j in range(i+1, len(num)):
                    if num[i] + num[j] in cache:
                        cache[num[i] + num[j]].append([i,j])
                    else:
                        cache[num[i] + num[j]] = [[i,j]]

            for a in range(0, len(num)):
                for b in range(a+1, len(num)):
                    key = target - num[a] - num[b]
                    if key not in cache:
                        continue

                    ca_list = cache[key]
                    for k in ca_list:
                        if a <= k[1]:
                            continue
                        tmp = [num[k[0]], num[k[1]], num[a], num[b]]
                        tmp.sort()
                        
                        if tuple(tmp) not in listset:
                            listset.add(tuple(tmp))
                            ans.append(tmp)
                        # another method to remove duplicate
                        # ans = reduce(lambda x,y : x if y in x else x+[y], [[],]+ans)

            return ans

