#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int n,i;
   while(scanf("%ld",&n)==1 && n!=0){
    long int arr[n];
    for(i=0; i<n; i++)
        scanf("%ld",&arr[i]);

    sort(arr,arr+n);
    printf("%ld",arr[0]);
    for(i=1; i<n; i++){
        printf(" %ld",arr[i]);
    }
    printf("\n");

   }
    return 0;
}
