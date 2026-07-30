def comb(arr):
    # Iterative way ==========================

    # subsets = [[]]

    # for i in arr:
    #     subset = []
    #     for j in subsets:
    #         subset.append(j + [i])

    #     subsets.extend(subset)

    # return subsets


    # recursive way ==========================

    subsets = []

    def backtrack(index, subset):
        if(index == len(arr)):
            temp = []
            # temp = ""           # for string: temp = ""
            for x in subset:
                temp.append(x)
                # temp += x      # for string: temp += x
            subsets.append(temp)
            return

        subset.append(arr[index])
        backtrack(index+1,subset)
        subset.pop()
        backtrack(index+1,subset)

    backtrack(0,[])
    return subsets



# Driver ========================================

n = int(input())
arr = list(map(int,input().split()))
# arr = "123"

combination = comb(arr)
print(combination)
# permutation = perm(arr)
