def selection_sort(arr: list[int]):
    n = len(arr)
    for i in range(n):
        minimum = i
        for j in range (i+1, n):
            if(arr[minimum] > arr[j]):
                minimum = j
        arr[i], arr[minimum] = arr[minimum], arr[i]
    print(arr)

def bubble_sort(arr: list[int]):
    n = len(arr)
    for i in range(n-1,0,-1):
        for j in range (i):
            if(arr[j] > arr[j+1]):
                arr[j], arr[j+1] = arr[j+1], arr[j]
    print(arr)

def insertion_sort(arr: list[int]):
    n = len(arr)
    for i in range(0,n):
        j=i
        while(j>0 and arr[j-1] > arr[j]):    
            arr[j-1], arr[j] = arr[j-1], arr[j]
            j -= 1
    print(arr)

def divide(arr: list[int], l: int, h:int):
    if l>=h:
        return
    mid = (l+h)//2
    divide(arr, l, mid)
    divide(arr, mid+1, h)
    merge(arr, l, mid, h)

def merge(arr: list[int], l: int, mid: int, h:int):
    temp = []
    left = l
    right = mid + 1
    while(left <= mid and right <= h ):
        if arr[left] < arr[right]:
            temp.append(arr[left])
            left += 1
        else:
            temp.append(arr[right])
            right += 1  
    while(left <= mid):
        temp.append(arr[left])
        left += 1
    while(right <= h):
        temp.append(arr[right])
        right += 1
    for i in range(l, h+1):
        arr[i] = temp[i-l]


