count =  0
for i in range(len(inp)):
    if (inp[i]+1) in inp:
        count+=1
print(count)             