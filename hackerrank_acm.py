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
    print(res)
    return
def  sets(n):
    if len(n)==2:
        (pos(n))
        return
    for i in range(1,len(n)):
        rep_arr = []
        rep_arr.append(n[0])
        rep_arr.append(n[i])
        (pos(rep_arr))
    return sets(n[1:])

print(pos(list(map(int,(input().split())))))
#sets([10101,11100, 11010 ,11100])

#1