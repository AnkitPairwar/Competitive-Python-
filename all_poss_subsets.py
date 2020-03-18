def poss_subset(inp_set , out_set):
    if len(inp_set) == 0:
        print(out_set)
        return

    poss_subset(inp_set[1:] , out_set[:])
    poss_subset(inp_set[1:] , out_set[:] .append(inp_set[0]))
    return 

st =list(map(int ,input().split(',')))
print(st)
poss_subset(st , [])