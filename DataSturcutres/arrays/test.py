from hashlib import new
from operator import ne
from pickle import TRUE
from traceback import print_tb
from queue import Queue

if __name__ == '__main__':
        q = Queue(maxsize=3)
        if (q.empty() is True):
                print("inside if")
                q.get()                   
