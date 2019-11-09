#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,x,z;
    cin>>x;
    do{
        cin>>z;
    }while(x>=z);
    b = 0;
    for(a=x; b<z; a++){
        b+=a;
        c++;
    }
    cout<<c<<endl;

    return 0;
}
