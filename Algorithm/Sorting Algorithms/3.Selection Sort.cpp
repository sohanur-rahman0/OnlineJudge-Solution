#include <bits/stdc++.h>
using namespace std;
///Time complexity O(n^2)
void InsertionSort(int arr[], int n)
{
    int j, k;
    for (int i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }
        swap(arr[i], arr[k]);
    }
}

int main()
{
    int arr[] = {9, 4, 3, 4, 6, 2, 1, 44, 55, 66}, n = 10;
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}