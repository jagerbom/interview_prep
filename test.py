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
        '''
        import heapq
        height = [2,3,8,7,4,5]
        dict_new = {}
        for x in range(len(height)):
            dict_new[height[x]] = x
            
        heapq.heapify(height)
        a,b = heapq.nlargest(2, height)
        print (a,b)
        print(dict_new)

        length = min(a,b)
        print(dict_new[a])
        print(dict_new[b])
        '''
        a = [2,3,4,5,6,7]
        for x in a[::-1]:
                print(x)
        

