def poss_sub(inp_st , out_st):
    if len(inp_st) == 0:
        print(out_st)
        return

    poss_sub(inp_st[1:] , out_st)
    poss_sub(inp_st[1:] , out_st + inp_st[0])
    return

string = input()
poss_sub(string , "")