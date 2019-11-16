#include<iostream>
using namespace std;
int main()
{
    int n,i,box=0,count=0;
    cin>>n;
    int step = 1;
    while(true){
        for(int i=1; i<=step; i++)
            box+=i;

        step++;

        if(box>n)break;

        count++;
    }
    cout<<count<<endl;
}
