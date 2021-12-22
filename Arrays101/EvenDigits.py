'''
Finds the amount of numbers with a even anount 
of digits in a given array
'''
def findNumber(nums):
    count = 1
    mastercnt = 0

    for i in range(len(nums)):
        count = 1
        while nums[i] >= 10:
            nums[i] //= 10
            count += 1

        if count % 2 == 0:
            mastercnt += 1

    return mastercnt

nums = [100000]
print(findNumber(nums))
