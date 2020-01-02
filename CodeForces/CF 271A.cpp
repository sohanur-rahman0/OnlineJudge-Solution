#include<iostream>
using namespace std;
int main()
{
    int year,a,b,c,d;
    cin>>year;
    do{
        year++;
        a = year/1000;
        b = year/100%10;
        c = year/10%10;
        d = year%10;
    }while((a!= b && b!=c && c!=d && a!=d && a!=c && b!=d)==0);

    cout<<year;

}
