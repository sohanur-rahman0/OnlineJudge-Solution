#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int n)
{
    bool flag; 
    /'flag has been used to make this algorithm adaptive....that
    means if the array is already sorted this will break the loop 
    so the complexity would be O(n) and normal complexity of this 
    algorithm is O(n^2)'/
    for (int i = 0; i < n - 1; i++)
    {
        flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}
int main()
{
    int arr[] = {5, 56, 64, 64, 64, 42, 2, 3, 5, 5, 63, 6, 7}, n = 13;
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}