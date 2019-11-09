#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,e,f;

    while(cin>>a>>b>>c){
        if(a== 0 && b == 0 && c==0)break;

    d = a*a;
    e = b*b;
    f = c*c;
    if(f ==d+e)
            cout<<"right"<<endl;
    else if(d==e+f)
        cout<<"right"<<endl;
    else if(e == d+f)
        cout<<"right"<<endl;
    else
        cout<<"wrong"<<endl;
    }
    return 0;
}
