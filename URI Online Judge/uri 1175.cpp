#include<iostream>
using namespace std;
int main()
{
    int arr[20],des[20],i,j;
    for(i=0; i<20; i++){
        cin>>arr[i];
    }
    for(i=0,j=19; i<20; i++,j--){
        des[j]=arr[i];
    }
    for(i=0; i<20; i++){
        cout<<"N["<<i<<"] = "<<des[i]<<endl;
    }



    return 0;
}
