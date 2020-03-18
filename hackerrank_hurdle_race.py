def potion(max_ht , hurd):
    max_hd = max(hurd)
    if max_hd > max_ht:
        return max_hd - max_ht
    else:
        return 0
max_ht = (input().split(" "))[1]
hurd = map(int,input().split(" "))
print(potion(int(max_ht) , hurd))
#5 4
#1 6 3 5 2
#