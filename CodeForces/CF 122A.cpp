#include<iostream>
using namespace std;
int main()
{
    int n;
    bool is_lucky = false;
    cin>>n;
    int lucky[12]={4,7,47,74,44,444,447,474,477,777,774,744};
    for(int i=0; i<12; i++){
        if(n%lucky[i]==0)
            is_lucky = true;
    }
        if(is_lucky)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

}
