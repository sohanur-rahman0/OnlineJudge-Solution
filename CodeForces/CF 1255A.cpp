#include<iostream>
using namespace std;

int main()
{
    long a,b,tc,ans=0,in,rem;
    cin>>tc;
    while(tc--){
        cin>>a>>b;
        ans = 0;
        if(a==b)
            cout<<"0"<<endl;
        else{
           in = abs(a-b);
           rem = in/5;
           in-=(rem*5);
           ans += rem;

           rem = in/2;
           in -=(rem*2);
           ans += rem;

           ans+=in;
           cout<<ans<<endl;


        }
    }

}
