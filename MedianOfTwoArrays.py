'''
use // instead of math.floor

'''

import math as m


nums1 = [1,3]
nums2 = [2]

for i in range(len(nums2)):
    nums1.append(nums2[i])

nums1.sort()

n = m.floor(len(nums1) / 2)

if len(nums1) %2 == 0:

    print((nums1[n] + nums1[n-1]) / 2)
else:
    print(nums1[n])
