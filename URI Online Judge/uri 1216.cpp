#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    double n,sum;
    int c;
    string str;
    char ch;
    while(getline(cin,str))
    {

        cin>>n;
        ch = getchar();
        sum+=n;
        c++;
    }
    cout<<fixed<<setprecision(1)<<sum/c<<endl;
}
