from collections import defaultdict
#strs = ["eat","tea","tan","ate","nat","bat"]
ans_map ,ans_ls,coll = defaultdict(list) , list() ,list()
for i in range(len(strs)): 
    ans_map["".join(sorted(strs[i]))].append(strs[i])
for i in ans_map.values():
    coll.append(i)
return coll
