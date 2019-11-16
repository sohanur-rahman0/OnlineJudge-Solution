#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m = max(a,b);
    m = max(m,c);
    int n = min(a,b);
    n = min(n,c);
    cout<<m-n<<endl;

}
