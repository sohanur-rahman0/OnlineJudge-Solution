#include<bits/stdc++.h>  ///Time complexity O(n^2)
using namespace std;
int main()
{
    int size = 8;
    int arr[size] = {-1,2,4,-3,5,2,-5,2};
    int best = 0,sum;
    for(int i=0; i<size; i++)
    {
        sum = 0;
        for(int j=i; j<size; j++){
            sum+=arr[j];
            best = max(best,sum);
        }
    }
    cout<<best<<"\n";
}
