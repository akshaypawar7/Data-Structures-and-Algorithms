# Heap Sort

Given an array of size N. The task is to sort the array elements by completing functions heapify() and buildHeap() which are used to implement Heap Sort.

## Example 1:

```
Input:
N = 5
arr[] = {4,1,3,9,7}
Output:
1 3 4 7 9
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1,3,4,7,9.
```

## Example 2:

```
Input:
N = 10
arr[] = {10,9,8,7,6,5,4,3,2,1}
Output:
1 2 3 4 5 6 7 8 9 10
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1, 2,3,4,5,6,7,8,9,10.
```

**_Expected Time Complexity:_** O(N \* Log(N))<br/>
**_Expected Auxiliary Space:_** O(1)

**_Constraints:_**<br/>
1 ≤ N ≤ 106
1 ≤ arr[i] ≤ 106
