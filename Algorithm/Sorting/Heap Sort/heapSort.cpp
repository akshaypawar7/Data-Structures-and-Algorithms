#include <iostream>
using namespace std;

class Solution
{
public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

public:
    void heapify(int arr[], int n, int i)
    {
        int largest_index = i,
            ln = 2 * i + 1,
            rn = 2 * i + 2;

        if (ln < n && arr[ln] > arr[i])
            i = ln;
        if (rn < n && arr[rn] > arr[i])
            i = rn;
        if (i != largest_index)
        {
            swap(&arr[i], &arr[largest_index]);
            heapify(arr, n, i);
        }
    }

public:
    void heapSort(int arr[], int arr_size)
    {
        for (int i = arr_size / 2 - 1; i >= 0; i--)
            heapify(arr, arr_size, i);

        for (int n = arr_size - 1; n > 0; n--)
        {
            swap(&arr[0], &arr[n]);
            heapify(arr, n, 0);
        }
    }
};

int main(int argc, char const *argv[])
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    Solution().heapSort(arr, arr_size);
    for (auto &&i : arr)
        cout << i << " ";

    return 0;
}
