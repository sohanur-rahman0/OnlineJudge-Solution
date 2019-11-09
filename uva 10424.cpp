#include<bits/stdc++.h>

using namespace std;

int digit(int n){
     int temp = n;
     int sum;
        while((temp/10)>0)
        {
            sum = 0;
            while(n>0)
            {
                sum +=n%10;
                n/=10;
            }
            temp = sum;
            n = temp;
        }
        return temp;

}

int main()
{
    ///int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10,k=11,l=12,m=13,n=14,o=15,p=16,q=17,r=18,s=19,t=20,u=21,v=22,w=23,x=24,y=25,z=26;
   /// int A=1,B=2,C=3,D=4,E=5,F=6,G=7,H=8,I=9,J=10,K=11,L=12,M=13,N=14,O=15,P=16,Q=17,R=18,S=19,T=20,U=21,V=22,W=23,X=24,Y=25,Z=26;
    char name[100],name2[100];
    //string name,name2;
    double ans,s,s2;

    int sum,sum2;
    sum=sum2=0;
    while(gets(name)){
        //getchar();
        sum = sum2 = 0;
           gets(name2);
        for(int i=0;name[i]; i++){
            if(isupper(name[i]))
                sum+=name[i] - 65 + 1;
            else if(islower(name[i]))
                sum+=name[i] - 97 + 1;
        }

        for(int i=0; name2[i]; i++){
            if(isupper(name2[i]))
                sum2+=name2[i] - 65 + 1;
            else if(islower(name2[i]))
                sum2+=name2[i] - 97 + 1;
        }
        //cout<<sum<<" "<<sum2<<endl;

    s  = digit(sum);
    s2 = digit(sum2);
    //cout<<s<<" "<<s2<<endl;

    if(s>s2){
        int temp;
        temp = s;
        s = s2;
        s2 = temp;
    }
    ans = (s/s2)*100;
    cout<<fixed<<setprecision(2)<<ans<<" %"<<endl;
    }
    return 0;
}



