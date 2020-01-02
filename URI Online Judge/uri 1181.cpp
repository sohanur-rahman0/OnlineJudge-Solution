#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double arr[12][12],sum=0.0;
    int i,j,column;
    char c;
    cin>>column;
    cin>>c;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>arr[i][j];
            if(j == column)
            {
                sum+=arr[i][j];
            }
        }
    }

    if(c == 'S')
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum/12.0<<endl;

    return 0;
}
