#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc,d,m,y,dd,mm,yy,age,i=0;
    while(cin>>tc){
            while(tc--){
                   // i = 0;
             scanf("%d/%d/%d",&d,&m,&y);
             scanf("%d/%d/%d",&dd,&mm,&yy);
             age = y-yy;
             if(m<mm)age--;
             else if(m==mm){
                if(d<dd)
                    age--;
             }
             if(age<0)
                printf("Case #%d: Invalid birth date\n", ++i );
            else if(age>130)
                printf("Case #%d: Check birth date\n", ++i);
            else
                printf("Case #%d: %d\n",++i,age);
            }
    }

    return 0;
}
