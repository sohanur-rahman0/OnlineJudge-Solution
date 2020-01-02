#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0){
    for(int i=1; i<n; i++)
    {
        if(i%2==0)
            cout<<"I love that ";
        else
            cout<<"I hate that ";

    }
    cout<<"I love it";
    }
    else{
        for(int i=1; i<n; i++)
    {
        if(i%2==0)
            cout<<"I love that ";
        else
            cout<<"I hate that ";

    }
    cout<<"I hate it";
    }

}
