#TODO
#Modifiy arr in place 
# DOne here btu leet issue


def duplicateZeros(arr: list[int]) -> None:
    arrSize = len(arr)
    tmp = []
    for i in range(arrSize):
        if arr[i] == 0:
            tmp.append(0)

        tmp.append(arr[i])
    
    return tmp[:arrSize]


arr = [0,4,1,0,0,8,0,0,3]
arr = duplicateZeros(arr)
print(arr)
