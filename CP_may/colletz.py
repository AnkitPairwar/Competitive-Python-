def colletz(n):
    if(n ==1):
        print(1)
        return 
    if(n%2 == 0):
        if n//2 == 1:
            return colletz(n //2)    
        print(n //2)
        return colletz(n //2)
    else:    
        print((3*n)+1)
        return colletz((3*n)+1)
#main
n = int(input())
colletz(n)    