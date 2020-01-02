#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int tc,n,sum=0;
    cin>>tc;
    while(tc--){
        cin>>n;
        sum = 0;
        for(int i=0; i<n; i++){
            sum+= pow(2,i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
