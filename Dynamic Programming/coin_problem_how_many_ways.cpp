#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int coins[6] = {1,5,10,25,50};
    int n;
    while(cin>>n){
    	int table[6][n+1];

    	for (int i = 0; i < 6; ++i)
    	{
    		table[i][0] = 1;
    	}
    	for (int i = 0; i < n+1; ++i)
    	{
    		table[0][i] = 0;
    	}

    	for (int i = 1; i < 6; ++i)
    	{
    		for(int j = 1; j< n+1; j++){
    			if(coins[i-1] > j){
    				table[i][j] = table[i-1][j];
    				
    			}else{
    				table[i][j] = table[i-1][j] + table[i][j-coins[i-1]];
    			}
    		}
    	}

    	for (int i = 0; i < 6; ++i)
    	{
    		for(int j = 0; j< n+1; j++){
    			cout<<table[i][j]<<" ";
    		}cout<<endl;
    	}

    	cout<<table[5][n]<<endl;
    }

}