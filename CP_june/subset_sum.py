def poss_subset(inp_set , out_set ,k):
    if len(inp_set) == 0:
        return
    else:
        if(sum(inp_set) == k):
            return inp_set    

    poss_subset(inp_set[1:] , out_set ,k)
    poss_subset(inp_set[1:] , out_set[:] + list(inp_set[0]) ,k)
    return

k=int(input())
st =list(map(int,input().split(',')))
poss_subset(st,list() ,k)