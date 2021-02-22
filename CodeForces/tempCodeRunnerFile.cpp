#include<bits/stdc++.h>
//did not solve yet
#define ll long long int
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,n;
        cin>>a>>b>>n;
        int attack[n];
        int health[n];

        ll herohealth = b;
        
        for(int i =0; i<n; i++){
            cin>>attack[i];  
        }

        for(int i=0; i<n; i++){
            cin>>health[i];
        }

        int howmanykop [n];

        for(int i=0; i<n; i++){
            howmanykop[i] = ceil(health[i]/(float)a);

            if(howmanykop[i] > 1){
                herohealth -= attack[i] * (howmanykop[i]-1);
            } 
        }

        if(herohealth <= 0){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }

    
    }
}