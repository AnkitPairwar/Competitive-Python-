import math
def pos(arr):
    res = 0
    for i in range(len(str(arr[0]))):
        if arr[0]%(10) | arr[1]%(10) ==1:
            res+=1
        arr[0] //= 10
        arr[1] //= 10
        #print(arr[0])
        #print(res)
    return res
def  sets(n):
    for i in range(n):
        i,i+1

    return
#print(pos(list(map(int,(input().split())))))
print(sets([1,2,3,4]))