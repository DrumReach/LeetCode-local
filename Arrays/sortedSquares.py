
'''
exceeds time limit for big nums
'''

def sortedSquares(nums):

    #square the array
    for i in range(len(nums)):
        nums[i] *= nums[i]

    print(nums)
    #sort the array
    for _ in range(len(nums)):
        for i in range(1,len(nums)):
            if nums[i-1] > nums[i]:
                tmp = nums[i-1]
                nums[i-1] = nums[i]
                nums[i] = tmp


    return nums




nums = [-7,-3,2,3,11]
print(sortedSquares(nums))
