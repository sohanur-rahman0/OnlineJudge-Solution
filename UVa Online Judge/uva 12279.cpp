#include<iostream>
using namespace std;
int main()
{
    int n,c=1;
    while(cin>>n && n!=0){
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int given=0;
        int ngiven=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0)
                given++;
            else
                ngiven++;
        }
        cout<<"Case "<<c++<<": "<<(given-ngiven)*-1<<endl;
    }
}
