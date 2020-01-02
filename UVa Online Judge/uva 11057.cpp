#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::sort;
int main()
{
    long long i,n,arr[10001],m,a,b,j;
    while(cin>>n){
        for(i=0; i<n; i++){
            cin>>arr[i];
    }

        cin>>m;

      sort(arr,arr+n);

      cout<<arr[0]<<arr[1];

        for(i=0; i<n-1; i++){
            for(j=i+1; i<n; j++){
                if(arr[i]+arr[j]==m)
                {
                    a = arr[i];
                    b = arr[j];
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl;

 printf("Peter should buy books whose prices are %d and %d.\n\n",a,b);



    }
    return 0;
}
