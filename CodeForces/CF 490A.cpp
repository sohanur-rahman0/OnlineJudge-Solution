#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,one,two,three,m,value;
    cin>>n;
    vector<int>vone,vtwo,vthree;
   one = two = three=0;
    for(int i=1; i<=n; i++){
        cin>>value;
        if(value==1){
            one++;
            vone.push_back(i);
        }
        else if(value==2){
            two++;
            vtwo.push_back(i);
        }
        else{
            three++;
            vthree.push_back(i);
        }
    }
   // cout<<one<<two<<three;
   m = min(min(one,two),three);

   cout<<m<<endl;
   for(int i=0; i<m; i++){
    cout<<vone[i]<<" "<<vtwo[i]<<" "<<vthree[i]<<endl;
   }

}
