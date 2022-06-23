def heapify(arr, n , l):
    
    largest_index = l

    ln = 2*l+1
    rn = 2*l+2

    if ln < n and arr[ln] > arr[l]:
        l = ln
    if rn < n and arr[rn] > arr[l]:
        l = rn
    if l!= largest_index:
        arr[l], arr[largest_index] = arr[largest_index], arr[l]
        heapify(arr, n, l)

def heapSort(arr):

    n = len(arr)
    for i in range(n//2-1, -1, -1):
        heapify(arr, n, i)
    
    for n in range(n-1, 0, -1):
        arr[0], arr[n] = arr[n], arr[0]
        heapify(arr, n, 0)

arr = [12, 11, 13, 5, 6, 7]
heapSort(arr)

print(arr)