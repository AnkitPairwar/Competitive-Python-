#prices = [1,9,6,9,1,7,1,1,5,9,9,9]
prices = list(map(int , input().split()))
cur_st ,prof ,stock ,n= 0, 0 ,False,len(prices)
for i in range(n):
    if i == n-1:
        if stock ==True:
            if prices[i]>prices[i-1]:
                prof+=prices[i] - cur_st
        break
    if stock == False:
        if prices[i] <= prices[i+1]:
            stock = True
            cur_st = prices[i]
    else:
        if prices[i]>=prices[i+1]:
            stock =False
            prof+=prices[i] - cur_st
            cur_stock = 0
    print(prof , i,stock,cur_st,prices[i])        
print(prof)                    

                
                
        