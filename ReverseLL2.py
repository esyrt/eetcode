#coding=utf8
#!/bin/python
# Program: Reverse a linked list from position m to n. Do it in-place and in one-pass.
# Given 1->2->3->4->5->NULL, m = 2 and n = 4,
# return 1->4->3->2->5->NULL.
# 		
# History:
# Date:  2014/08/13 16:01:30

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @param m, an integer
    # @param n, an integer
    # @return a ListNode
    def reverseBetween(self, head, m, n):
        dummy = ListNode(-1)
        dummy.next = head
            
        prept = dummy
        for k in range(m-1):
            prept = prept.next

        head2 = prept
        prept = head2.next
        cur = prept.next

        for k in range(n-m):
            prept.next = cur.next
            cur.next = head2.next
            head2.next = cur
            cur = prept.next

        return dummy.next


                                    





