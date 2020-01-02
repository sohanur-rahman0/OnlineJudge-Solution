#include<iostream>

using namespace std;

int main()
{
    int n,i,j,temp,count;
    int arr[10000];
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
      count = 0;
        for(i = 0; i<n; i++)
    {
        j = i;


        while(j>0 && arr[j] < arr[j-1]){
            temp = arr[j];
            arr[j]= arr[j-1];
            arr[j-1]= temp;
            j--;
            count++;
        }

    }
    cout<<"Minimum exchange operations : "<<count<<endl;
    }
}
