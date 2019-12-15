#include<iostream>
#include<algorithm>
using namespace std;
int search(int arr[],int end,int key)
{
    int begin = 0;
    //int end = sizeof(arr)/sizeof(arr[0])-1;
    //int index = 0;
    while(begin<=end){
        int mid = (begin+end)/2;
        if(key == arr[mid]){
            return mid + 1;
            //break;
        }
        else if(key>arr[mid])
            begin = mid + 1;
        else if(key<arr[mid])
            end = mid - 1;

            //return index;
    }
    return -10;
}
int main()
{
    int a[]={100,2,10,50,20,500,100,150,200,1000,100};
    int size = sizeof(a)/sizeof(a[0])-1;
    sort(a,a+size);
    int key = 10;
    cout<<search(a,size,key);
}
