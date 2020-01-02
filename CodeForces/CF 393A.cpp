#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.size();
    int nc,ic,ec,tc,wc;
    nc = ic = ec = tc = wc = 0;
    for(int i=0; i<l; i++){
        if(s[i]=='n')
            nc++;
        else if(s[i]=='i')
        ic++;
        else if(s[i]=='e')
        ec++;
        else if(s[i]=='t')
            tc++;
    }

    /*nc+=1;

    while(nc>=3 && tc >=1 && ec>=3 && ic>=1){
        wc++;
        nc-=3;
        tc-=1;
        ec-=3;
        ic-=1;
    }*/

    //cout<<nc<<" "<<ic<<" "<<ec<<" "<<tc;

    nc = int(nc-1)/2;
    ec = int(ec/3);

    wc = min(nc,ec);
    wc = min(wc,tc);
    wc = min(wc,ic);

    cout<<wc<<endl;
    return 0;

}
