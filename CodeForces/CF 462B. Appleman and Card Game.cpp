#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    string str;
    cin>>n>>k>>str;
    ll arr[27] = {0};
    for(ll i=0; str[i]; i++){
        arr[int(str[i]-65)]++;
    }
 //for(int i=0; i<=26; i++)cout<<arr[i]<<" ";
    sort(arr,arr+27,greater<int>());
   ll coin = 0;
   for(int i=0; i<26; i++){
        if(k<=0)break;
        if(k>arr[i]){
            coin += arr[i] * arr[i];
            k-= arr[i];
        }else{
            coin += k * k;
            break;
        }
   }
   cout<<coin<<endl;
}
