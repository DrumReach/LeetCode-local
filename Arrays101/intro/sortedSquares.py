
'''
exceeds time limit for big nums
'''
def insertionSort(a: list[int]):
    for i in range(1, len(a)):
        j = i
        while j > 0 and a[j-1] > a[j]:
            a[j], a[j-1] = a[j-1], a[j]
            j -= 1
    return a


def sortedSquares(nums):

    #square the array
    for i in range(len(nums)):
        nums[i] *= nums[i]

    print(f"squared = {nums}")
    
    #sort the array
    nums = insertionSort(nums)
    return nums



nums = [-7,-3,2,3,11]
print(sortedSquares(nums))
