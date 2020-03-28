def swfunc(arr):
    max_val = 0
    ans_arr = []
    for i in range(len(arr)):
        if arr[i] > max_val :
            max_val = arr[i]
        if i >= 3:
            ans_arr .append (max_val)
    print(ans_arr)
    return

inp_arr = list(map(int,input().split()))
swfunc(inp_arr)