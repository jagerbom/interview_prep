from collections import deque
import math
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


        
def validate(node, low=-math.inf, high=math.inf):
        if not node:
                return True
        if node.num <= low or node.num >= high:
                return False
            
        return (validate(node.left, low, node.num) and 
                    validate(node.right, node.num, high))

def indoderSucc(node):
        print("TODO")
        
if __name__ == '__main__':
        root = None
        root = bstInsert(root, 10)
        root = bstInsert(root, 15)
        root = bstInsert(root, 5)
        root = bstInsert(root, 43)
        root = bstInsert(root, 27)
        root = bstInsert(root, 33)
        if (validate(root)):
                print("Valid BST")
        else:
                print("inValid BST")        
        bstInorder(root)
