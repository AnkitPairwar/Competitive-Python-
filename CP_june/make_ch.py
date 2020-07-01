def func(s,b,g):
    while(g!=0):
        if(g>5 and b>0):
            g-=5
            b-=1
        else:
            if(s>=g):
                return g
            else:        
                return -1


small_ch =int( input())
big_ch = int(input())
goal = int(input())
count = func(small_ch,big_ch,goal)
print(count)        


