#include<iostream>
using namespace std;
int main()
{
    int r,i,a,b,ca,cb;
    while(cin>>r && r!=0){
        ca=0;
        cb=0;
        for(i=0; i<r; i++){
            cin>>a>>b;
            if(a>b)ca++;
            if(a<b)cb++;
        }
        cout<<ca<<cb<<endl;
    }
    return 0;
}
