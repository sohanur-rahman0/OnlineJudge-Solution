#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n,i;
    double sumx=0,sumy=0,sumxy=0,sumx2=0;
    float a,b;
    n = 5;
    double x[5]={0,1,2,3,4};
    double y[5]={1,5,10,22,38};
    for(i=0;i<=n-1;i++)
    {
        sumx=sumx +x[i];
        sumx2=sumx2 +x[i]*x[i];
        sumy=sumy +y[i];
        sumxy=sumxy +x[i]*y[i];
 
    }
    cout<<"sum of x^2: "<<sumx2<<endl<<"sum of xy: "<<sumxy;
    
    return(0);
}

