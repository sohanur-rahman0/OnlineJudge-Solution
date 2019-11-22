#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    bool win = true;
    multimap<int,int>drag;
    int s,n;
    cin>>s>>n;
    int a,b;

    for(int i=0; i<n; i++){
       cin>>a>>b;
       drag.insert(pair<int,int>(a,b));
    }
    //sort(arr,arr+n);
    multimap<int,int>::iterator itr;

    for(itr = drag.begin(); itr!=drag.end();itr++){
        if(itr->first>=s){
            win = false;
            break;
        }
        s += itr->second;
//cout<<itr->first<<" "<<itr->second;
    }

    if(win)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
