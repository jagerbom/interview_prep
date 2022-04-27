from collections import deque
class bstNode:
        def __init__(self, num)
                self.num = num
                self.left = None
                self.right = None

def bstInsert(root, value):
        if root == None : return
        if (val < root.val):
                bstInsert(val, root.left)
        else:
                bstInsert(val, root.right)
        node = bstNode(val)
        node.val = val
        node.left = None
        node.right = None                

if __name__ == '__main__':
