from cmath import pi
from collections import defaultdict, deque
from traceback import print_tb

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
        matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
        print(matrix)
        numCols = len(matrix[0])
        cols = [0]*numCols
        for i in range(numCols):
                cols[i] = [row[i] for row in matrix]
        print(cols)        
