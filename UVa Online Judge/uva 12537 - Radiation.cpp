#include<bits/stdc++.h>///TLE
#define endl '\n'
using namespace std;
int n;
int BinarySearch(int r,vector<double>dis)
{


    int left = 0, right = n-1;
    while (left != right)
    {
        int mid = (left+right+1)/2;
        if (dis[mid] > r)
            right = mid-1;
        else
            left = mid;
    }
    return left+1;

}
int main()
{

    int c=1;
    while(scanf("%d",&n) && n!=0)
    {
        int t=n;
        vector<int>x_co;
        vector<int>y_co;
        for(int i=0; i<n; i++)
        {
            int m,n;
            scanf("%d %d",&m,&n);
            x_co.push_back(m);
            y_co.push_back(n);
        }
        int ax,ay,bx,by,q;
        //cin>>ax>>ay>>bx>>by>>q;
        scanf("%d %d %d %d %d",&ax,&ay,&bx,&by,&q);
        vector<double>a_dis;
        vector<double>b_dis;
        for(int i=0; i<t; i++)
        {
            a_dis.push_back(sqrt(pow(x_co[i]-ax,2)+pow(y_co[i]-ay,2)));
            b_dis.push_back(sqrt(pow(x_co[i]-bx,2)+pow(y_co[i]-by,2)));
        }
        sort(a_dis.begin(),a_dis.end());
        sort(b_dis.begin(),b_dis.end());

        cout<<"Case "<<c++<<":"<<endl;
        int r1,r2;

        while(q--)
        {
            //cin>>r1>>r2;
            scanf("%d %d",&r1,&r2);
            int ans = n - BinarySearch(r1,a_dis) - BinarySearch(r2,b_dis);
            if (ans >= 0)
                cout<<ans<<endl;
            else
                cout<<"0"<<endl;
        }
    }
}
