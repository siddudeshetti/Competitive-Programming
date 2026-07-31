def prefix_sum(arr):
    n = len(arr)
    
    prefix = [0]*n
    prefix[0] = arr[0]

    for i in range(1,n):
        prefix[i] += prefix[i] - arr[i]

    return prefix
