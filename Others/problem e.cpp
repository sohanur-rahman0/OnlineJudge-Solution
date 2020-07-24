#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long n,i,l2,c2,l,c=0,j;
    char str[101];
    cin>>str;
    cin>>n;
    l = strlen(str);
    for(i = 0; i<l; i++){
        if(str[i]=='a')c++;
    }
    c2 = c*(n/l);;
    l2 = n%l;
    for(j= 0; j<l2; j++){
        if(str[j]=='a')c2++;
    }
    cout<<c2<<endl;



    return 0;
}
