if __name__ == '__main__':
    arr = [] #Declaring an empty array
    arr.append(4) #Appending elements at the end of an array
    arr.append(5)
    arr.append(6)
    arr.append(7)
    print("### APPEND FUNCTION ####")
    print(arr)

    print("### Clear FUNCTION ####")
    arr.clear()
    print(arr)

    arr.append(4)
    arr.append(5)
    arr.append(6)
    arr.append(7)

    print("### Copy to arr2 FUNCTION ####")
    arr2 = arr.copy()
    print("arr2", arr2)

    print("### Insert at 0  index FUNCTION ####")
    arr.insert(0,100)
    print(arr)

    print("### Pop last element FUNCTION ####")
    arr.pop() #pops the last element
    print(arr)

    print("### Pop element at given index (0) FUNCTION ####")
    arr.pop(0) #pop the element at specified index
    print(arr)

    arr.append(1)

    print("### Reversing FUNCTION ####")
    arr3 = [4,6,1,2,7]
    print(arr3)
    arr3.reverse()
    print("after reverse", arr3)

    print("### Sorting FUNCTION ####")
    arr3.sort()
    print(arr3)

    print("### Using Sorted FUNCTION ####")

    arr4 = [100,1,20,7,65,58]
    arr5 = sorted(arr4)
    print("arr4",arr4)
    print("arr5",arr5)

    print("looping in an array")
    for x, num in enumerate(arr5):
        print(x, num)
