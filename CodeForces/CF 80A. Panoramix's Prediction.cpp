#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2)return false;
    if(n>1){
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }return true;

    }return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    bool flag = false;
    for(int i=n+1; i<=m; i++){
        if(isPrime(i) && i!=m)
        {
            flag = false;
            break;
        }else if(isPrime(i) && i==m){
            flag = true;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
