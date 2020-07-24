/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#define ll long long
ll arr[1000000]= {0};
using namespace std;
void sieve()
{
    for(ll  i=2; i<= 1000000; i++)
    {
        for (ll j=i*i; j<= 1000000; j+=i)
        {
            arr[j-1]=1;

        }
    }
}

int main()
{
    ll sum = 0;
    sieve();
    arr[1] = 1;
    for(ll i=1; i<1000000; i++){
        if(arr[i-1]==0){
            cout<<i<<' ';
            sum+= i;
        }
    }
cout<<sum+1<<endl;
    return 0;
}
