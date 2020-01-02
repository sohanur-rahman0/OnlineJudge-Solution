#include<iostream>

using namespace std;
char *arr[] = {"", "1", "22", "333", "4444", "55555", "666666", "7777777", "88888888", "999999999"};
int main()
{

    int tc,a,f,i,j;
    cin>>tc;
    while(tc--){

       cin>>a>>f;
       while(f--){
        for(i = 1; i<a; i++)
            cout<<arr[i]<<endl;
        for(j =i; j; j--)
            cout<<arr[j]<<endl;

        if(f || tc)
            cout<<endl;
       }
    }
    return 0;
}
