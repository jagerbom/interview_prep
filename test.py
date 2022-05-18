from cmath import pi
from collections import defaultdict, deque

class bstNode:
        def __init__(self, num):
                self.num = num
                self.left = None
                self.right = None

def bstInorder(root):
        if root == None : return
        bstInorder(root.left)
        print(root.num)
        bstInorder(root.right)

def bstInsert(root, value):
        
        if root == None :
                return bstNode(value)        

        if (value < root.num):
                root.left = bstInsert(root.left, value)
        else:
                root.right = bstInsert(root.right , value)

        return root                        

if __name__ == '__main__':
        text1 = "abcde"
        text2 = "ace"
        dp_grid = [[0] * (3) for _ in range(2)]
        print(dp_grid)