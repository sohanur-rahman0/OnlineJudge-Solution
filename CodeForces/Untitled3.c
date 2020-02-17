#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0;
    cin>>n>>m;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   // for(int i=0;i<n;i++)cout<<arr[i]<<endl;
    string first="",last="",middle="",t,f;
    for(int i=0; i<n; i++){
        t = arr[i];
        reverse(t.begin(),t.end());
        if(arr[i]==t){
            middle=arr[i];
            //arr[i] = "45";
        }
//        if(arr[i]=="45"){
//            continue;
//        }
        else{
        for(int j=i+1; j<n; j++){
            if(t==arr[j]){
                f = t;
                reverse(f.begin(),f.end());

                first +=arr[i];
                 reverse(arr[j].begin(),arr[j].end());
                 last+=arr[j];
               // arr[j] = "45";
                break;
            }
        }
        }
    }
    reverse(last.begin(),last.end());
    string ans = first + middle + last;
    cout<<ans.size()<<endl<<ans<<endl;

}
