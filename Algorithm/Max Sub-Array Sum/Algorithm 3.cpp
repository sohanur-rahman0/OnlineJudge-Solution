#include<bits/stdc++.h>   ///Time complexity O(n)
using namespace std;
int main()
{
    int size = 8;
    int arr[size] = {-1,2,4,-3,5,2,-5,2};
    int best =INT_MIN;
    int sum =0;
    for(int i=0; i<size; i++)
    {
        sum = max(arr[i],sum+arr[i]);
        best = max(best,sum);
    }
    cout<<best<<"\n";
}
