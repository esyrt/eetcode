# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # @param head, a ListNode
    # @param x, an integer
    # @return a ListNode
    def partition(self, head, x):
        if head == None:
            return head
        dhead = ListNode(-1)
        dhead.next = head
        prept = dhead
        precur = prept
        cur = prept.next
        
        while cur != None:
            if cur.val < x:
                precur.next = cur.next
                cur.next = prept.next
                prept.next = cur
                prept = cur
        
            precur = cur
            cur = cur.next
        return dhead.next

L1 = ListNode(2)
L2 = ListNode(1)

L1.next = L2
L2.next = None

ss = Solution()
kk = ss.partition(L1, 2)

while kk != None:
    print kk.val
    kk = kk.next
