#include<bits/stdc++.h>
using namespace std;
//it is adaptive as if it is already sorted then the complexity is O(n)
//Worst Case O(n^2)
void InsertionSort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int j = i-1;
        int x = arr[i];
        while(j>-1 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}
int main()
{
    int arr[] = {5,3,6,2,6,23,4,6,2,34,46,6};
    int n = 12;
    InsertionSort(arr,n);
    for(int i=0; i<n; i++)cout<<arr[i]<<' ';
}