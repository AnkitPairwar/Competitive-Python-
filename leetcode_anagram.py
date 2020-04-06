strs = ["eat","tea","tan","ate","nat","bat"]
ans_ls , ind ,done = [[strs[0]]] , 0 , False
for i in range(1,len(strs),1):
    while ind != len(ans_ls)-1:
        if len(strs[i] and ans_ls[ind]) == len(strs[i]):
            ans_ls[ind].append(strs[i])
            ind = 0
            done = True
            break
        else:
            print(i)
            
            ind+=1
    if done == False:
        ans_ls.append([strs[i]])
print(ans_ls)       
        