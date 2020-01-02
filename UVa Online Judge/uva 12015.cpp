#include<iostream>
#include<algorithm>
using namespace std;
struct web{
    string website;
    int value;
};
int main()
{
    int tc,maximum;
    cin>>tc;
    struct web arr[10];
    int n = tc;
    int c=0;
    while(tc--){
            cout<<"Case #"<<++c<<":"<<endl;
       for(int i=0; i<10; i++){
           cin>>arr[i].website;
           cin>>arr[i].value;
       }
       maximum = arr[0].value;

       for(int j=1; j<10; j++)
       {
           if(arr[j].value>maximum){
            maximum = arr[j].value;
           }
       }
       for(int i=0; i<10; i++){
        if(maximum == arr[i].value){
            cout<<arr[i].website<<endl;
        }
       }

//       for(int i=0; i<10; i++){
//           cout<<arr[i].website;
//           cout<<arr[i].value;
//       }
    }

}
