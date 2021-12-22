'''

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your maxProfit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum maxProfit you can achieve from this transaction. If you cannot achieve any maxProfit, return 0.


'''

def maxProfit(prices: list[int]) -> int:
    
    min = 10000
    maxProfit = 0

    for i in range(len(prices)):
        #find min
        if prices[i] < min:
            min = prices[i]
        #check maxProfit with min
        elif prices[i] - min > maxProfit:
            maxProfit = prices[i] - min

    
    return maxProfit


prices = [7,6,4,3,1]
print(maxProfit(prices))
