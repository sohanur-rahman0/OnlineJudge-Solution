#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g,l;
    int test;
    cin >> test;
    while(test--)
    {
        cin >> g >> l;
        if(l%g!=0){
        	cout<<"-1"<<endl;
        }else{
        	cout<<g<<' '<<l<<endl;
        }
    }

}


