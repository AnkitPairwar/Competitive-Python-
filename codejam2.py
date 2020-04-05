def check(n,k):
    trace=0
    if n%2!=0:
        for i in range(1,n+1):
            if (i*n) == k:
                return ["c",n , i]
            trace+=i
        if trace == k:
            return ["t" , n ]
        else:
            return -1
    else:
        for i in range(1,n+1):
            if (i*n) == k:
                return ["c" , n ,i]
        return -1
test_cases = int(input())
ans =[]
for test in range(test_cases):
    n = int(input())
    k = int(input())
    ans.append(check(n,k))

#output
for test in range(test_cases):
    if ans[test] == -1:
        print("Case #",test+1,": IMPOSSIBLE", sep="")
    else:
        if ans[test][0]=="t":
            print("Case #", test+1,": POSSIBLE",sep ="")
            for i in range(ans[test][1]):
                for j in range(ans[test][1]):
                    print(j,end=" ")
                print("")
        else:
            print("Case #", test+1,": POSSIBLE", sep="")