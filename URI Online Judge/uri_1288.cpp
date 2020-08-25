#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int items,capasity;
        cin>>items;

        int weight[items + 1], value[items + 1];

        for(int i=1; i<items+1; i++){
            cin>>value[i]>>weight[i];
        }

        cin>>capasity;

        int resistance;

        cin>>resistance;

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

        int damage = table[items][capasity];

        if (damage >= resistance)
        {
            cout<<"Missao completada com sucesso"<<endl;
        }else{
            cout<<"Falha na missao"<<endl;
        }
    }
    


}