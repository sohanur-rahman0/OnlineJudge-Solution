#include<bits/stdc++.h>
using namespace std;

int solve(int items,int weight[],int value[],int capasity){

    int table[items+1][capasity + 1];

    memset(table, 0 , sizeof(table));

    for (int i = 1; i < items + 1; ++i)
    {
        for(int j=1; j<capasity + 1; j++){
            if (weight[i] > j){
                table[i][j] = table[i-1][j];
            }else{
                table[i][j] = max(value[i] + table[i-1][j-weight[i]], table[i-1][j]);
            }
        }
    }

    return table[items][capasity];

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int items;
        cin>>items;

        int weight[items + 1], value[items + 1];

        for(int i=1; i<items+1; i++){
            cin>>value[i]>>weight[i];
        }

        int g;
        cin>>g;

        int capasity[g];

        int ans = 0;

        for(int i = 0; i < g; ++i) {
            cin>>capasity[i];
        }

        for (int i = 0; i < g; ++i)
        {
            int c = capasity[i];
            ans += solve(items,weight,value,c);
        }

        cout<<ans<<endl;

    }

}