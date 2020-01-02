#include<iostream>
using namespace std;
int main()
{
    int i,n,con=0;
    int arr[1000];
    cin>>n;
    for(i=0; i<1000;i++){

        cout<<"N["<<i<<"] = "<<con++<<endl;
        if(con==n)con=0;
    }
    return 0;
}
