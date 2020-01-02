#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,value=0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="Tetrahedron")
            value+=4;
        else if(s=="Cube")
            value+=6;
        else if(s=="Octahedron")
            value+=8;
        else if(s=="Dodecahedron")
            value+=12;
        else if(s=="Icosahedron")
            value+=20;
    }
    cout<<value<<endl;
}
