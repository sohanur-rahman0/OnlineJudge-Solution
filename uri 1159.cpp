#include<iostream>
using namespace std;
int main()
{
    int x,i,sum=0;
    while(1){
        cin>>x;
        sum=0;
        if(x==0)break;
        if(x%2==0)sum+=x;
        else sum+= ++x;

     for(i=0; i<4; i++){
        x+=2;
        sum+=x;
     }
     cout<<sum<<endl;
    }



    return 0;
}
