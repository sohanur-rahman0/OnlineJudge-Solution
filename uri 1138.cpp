#include<iostream>
using namespace std;
int main()
{
    long int a,b,i,temp,d;


    while(scanf("%ld %ld",&a,&b)!=EOF){
            if(a==0 && b==0)break;
        int count[10]={0};

        for(i=a; i<=b; i++){
            temp = i;
            while(temp!=0){
                d = temp%10;
                count[d]++;
                temp = temp/10;
            }
        }
        for(i=0; i<9; i++)
            cout<<count[i]<<" ";
        cout<<count[9]<<endl;
    }
    return 0;
}
