#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,tc,n;
    cin>>tc;
    cout<<"Lumberjacks:"<<endl;
    while(tc--){
        while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j){
            if(a>b && b>c && c>d && d>e && e>f && f>g && g>h && h>i && i>j)
                cout<<"Ordered"<<endl;
            else if (a<b && b<c && c<d && d<e && e<f && f<g && g<h && h<i && i<j)
                cout<<"Ordered"<<endl;
            else
                cout<<"Unordered"<<endl;
        }
    }
    return 0;
}
