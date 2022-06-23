class Solution:
    def merge(self,arr, l, m, r): 
        L = arr[l:m+1]
        R = arr[m+1: r+1]
        Ll = len(L)
        Rl = len(R)
    
        i, j, k = 0, 0, l
        while i< Ll and j< Rl:
            if L[i] <= R[j]:
                arr[k] = L[i]
                i+=1
            else:
                arr[k] = R[j]
                j+=1
            k+=1
        while i < Ll:
            arr[k] = L[i]
            i+=1
            k+=1
        while j < Rl:
            arr[k] = R[j]
            j+=1
            k+=1
    
    
    def mergeSort(self,arr, l, r):
        if l >= r: return None
        m = l+(r-l)//2
    
        self.mergeSort(arr, l, m)
        self.mergeSort(arr, m+1, r)
        self.merge(arr, l, m, r)
    
if __name__ == '__main__':
    arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    arr_size = len(arr)
    Solution.mergeSort(arr, 0, arr_size-1)
    print(arr)