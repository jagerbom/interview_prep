from collections import deque
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
        def fib(n):
                if n == 0: 
                        return 0
                elif n == 1 or n == 2 :
                        return 1
                else :
                        return (fib(n-1) + fib(n-2))        

                
        print(fib(9))
                


        

