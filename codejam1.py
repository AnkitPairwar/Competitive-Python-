test_cases = int(input())
trace, r , c =[] , [] ,[]

for test in range(test_cases):
    n = int(input())
    rows,k ,rl ,cl,locrow,ind = [] , 0 , 0 ,0 , [] , 0

    for i in range(n):
        rows.append(list(map(int, input().split())))
        locrow.append(rows[i][:])
        k += rows[i][i]

    for i in range(n):
        dic ={}
        for j in range(0,n):
            try:
                dic[rows[i][j]] +=1
            except:
                dic[rows[i][j]] = 1
        for z in dic:
            if dic[z] > 1:
                rl+=1
                break
    for j in range(n):
        dic = {}
        for i in range(n):
            try:
                dic[rows[i][j]] +=1
            except:
                dic[rows[i][j]] =1
        for z in dic:
            if dic[z] >1:
                cl+=1
                break

    #for i in range(n):
     #   for j in range(n):
      #      if locrow[j][i] >=0:
       #         locrow[j][abs(locrow[j][i] -1)] = - locrow[j][abs(locrow[j][i])]
        #    else:
         #       print(locrow[j][i]-1,i,j)
          #      cl+=1
    trace.append(k)
    r.append(rl)
    c.append(cl)
#print(c[0])
#output
for test in range(test_cases):
    print("Case #",test+1 , ": " ,trace[test]," " ,r[test]," " ,c[test]," " ,sep="")

#Case #x: k r c
#2 1 3
#1 3 2
#1 2 3