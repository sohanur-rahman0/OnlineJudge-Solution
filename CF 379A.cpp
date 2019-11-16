#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;

    cin>>a>>b;
    int total = a;
    while(true)
    {
        temp = a/b;
        total += temp;

        a = temp + a%b;
        if(a<b)
            break;
    }
    cout<<total<<endl;
}
