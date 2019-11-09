#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, c, d, a[100], b[100];


   scanf("%d", &n);
   int arr[n];
   for(int i=0; i<n; i++)
    cin>>arr[i];


   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);



   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];

   for (c = 0; c < n; c++)
      a[c] = b[c];


      int count = 0;
     cout<<endl;
      for(int i=0; i<n; i++){
        if(arr[i]!=a[i])
            count++;
      }
      cout<<count<<endl;

   return 0;
}
