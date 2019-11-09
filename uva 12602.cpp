#include<bits/stdc++.h>

using namespace std;

int main()
{
    char l,ext;
    int i,n,f,tc;
    cin>>tc;
    while(tc--){
            f=0;
    for(i=0; i<3; i++){
        cin>>l;
        f = f * 26 + l - 'A';
    }
    cin>>ext>>n;
    if(abs(f-n)<=100)
        cout<<"nice"<<endl;
    else
        cout<<"not nice"<<endl;
    }
    return 0;
}
