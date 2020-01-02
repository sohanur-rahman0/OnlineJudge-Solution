#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<max((a-min(a,b))/2, (b-min(a,b))/2);
    return 0;
}
//another logic
//if(a>b)swap(a,b);
//cout<<a<<" "<<(b-a)/2<<endl;

