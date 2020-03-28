def pattern (n):
    print_arr = []
    for i in range(n):
        counter = 0
        print('',end= '\n')
        for j in range(n):
            if j >= i :
                print(n-counter , end=" ")
            else:
                print(n - counter ,end= " ")
                counter+=1
num = int(input())
pattern(num)
