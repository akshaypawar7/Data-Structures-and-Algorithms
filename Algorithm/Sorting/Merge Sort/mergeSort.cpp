#include <iostream>

using namespace std;


class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int const n1 = m - l+1,
                  n2 = r-m;

        int L[n1], R[n2];

        for (int i = 0; i < n1; i++)
            L[i] = arr[l+i];
        for (int i = 0; i < n1; i++)
            R[i] = arr[m+1+i];
        
        int i =0, j =0;

        while (i< n1 && j < n2)
            arr[l++] = (L[i]<= R[j]) ? L[i++] : R[j++];
        
        while (i < n1) arr[l++] = L[i++];
        while (j < n2) arr[l++] = R[j++];
    }

    public:
    void mergeSort(int arr[], int const l, int const r)
    {
        if (l>=r)return;
        
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
};


int main(int argc, char const *argv[])
{
    int arr[] ={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    Solution().mergeSort(arr, 0, arr_size-1);

    for (auto &&i : arr)
        cout << i << " ";
    
    return 0;
}

