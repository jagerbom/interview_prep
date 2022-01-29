'''
This file contains all single linked list related code.
'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
    def getData(self):
        return self.data

    def getNext(self):
        return self.next    

class LinkedList:
    def __init__(self):
        self.head = None
    
    def push(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def printlist(self):
        temp =  self.head
        while (temp):
            print(temp.getData())
            temp = temp.getNext()
    
    def deletelist(self, data):
        temp = self.head
        if (self.head == None):
            print("LL is empty")
            return
       
        if (data == self.head.data):
            self.head = self.head.next
            return
        
        curr = self.head
        prev = None

        while curr is not None:
            if (curr.data == data):
                prev.next = curr.next
                curr.next = None
                return
            prev = curr
            curr = curr.next    



if __name__ == '__main__':
    llist = LinkedList()
    llist.push(7)
    llist.push(1)
    llist.push(3)
    llist.push(2)
    #llist.deletelist(2)
    llist.printlist()

