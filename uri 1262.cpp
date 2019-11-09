#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char arr[51];
    int p,l,i,count,co,j;
    while(scanf("%s %d",&arr,&p)!=EOF)
    {
        count=0;
        co=0;

        l = strlen(arr);
        for(i=0; i<l; i++){
            if(arr[i]=='R'){
                if(co==0){
                    count++;
                }

                co++;
                if(co==p)
                    co=0;
                }else{
                    count++;
                    co = 0;

                }

        }
        cout<<count<<endl;

    }
    return 0;
}
