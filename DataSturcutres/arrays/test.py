from hashlib import new
from operator import ne
from pickle import TRUE
from traceback import print_tb


if __name__ == '__main__':
        arr = [2,3,4,5]
        dict_new = {}
        for x in range(len(arr)):
                if ((arr[x]*2 in dict_new) or (arr[x]%2 == 0 and arr[x]/2 in dict_new)):
                        print("True")
                else:
                        dict_new[arr[x]] = x
        print(dict_new)                      
