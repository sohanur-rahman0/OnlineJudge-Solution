#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    cin>>n;
    multiset<int>v;

    for(int i=0; i<n; i++)
        {
            cin>>value;
            //v.push_back(value);
            v.insert(value);
        }

    //sort(v.begin(),v.end());
    int m = *v.rbegin();
    //cout<<m;
    //int l = sqrt(m);
    //vector<int>div;
    for(int i=1; i<=m; i++){
        if(m%i==0)
        {
          //  if(m/i==i){
                //div.push_back(i);
                v.erase(v.find(i));
           // }else{
//               // div.push_back(i);
//                //div.push_back(m/i);
 //               v.erase(v.find(i));
   //             v.erase(v.find(m/i));
            //}
        }
    }
//    sort(div.begin(),div.end());
//    vector<int>res;
//    set_symmetric_difference(v.begin(),v.end(),div.begin(),div.end(),back_inserter(res));
//    int len = res.size();
//    sort(res.begin(),res.end());
    //sort(v.begin(),v.end());
    int m2 = *v.rbegin();
    cout<<m<<" "<<m2<<endl;

}

