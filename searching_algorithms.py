def linear_search(arr,x):
    for i in range(len(arr)):
        if arr[i] == x:
            return i

def bs(arr,data):
    low = 0;
    high = len(arr)-1

    while low <= high:
        mid=(low+high)//2;
        if arr[mid] == data:
            return mid

        if(arr[mid]<data):
            low=mid+1
        else:
            high=mid-1
    return -1

def lb(arr,x):
    n = len(arr)
    low = 0
    high = n-1
    ans = n
    while (low<=high):
        mid = (low+high)//2

        if(arr[mid]>=x):
            ans = mid
            high = mid - 1
        else:
            low = mid + 1
    return ans

def ub(arr, x):
    n =  len(arr)
    low = 0
    high = n-1
    ans = n
    while (low <= high):
        mid = (low + high) // 2

        if(arr[mid]>x):
            ans = mid
            high = mid -1
        else:
            low = mid + 1
    return ans
