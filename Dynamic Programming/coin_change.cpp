#include<bits/stdc++.h>
using namespace std;

int main()
{
    

    // freopen("input.txt", "r", stdin);

    int amount;
    cin>>amount;

    int n;

    cin>> n;

    int coins[n+1] = {0};

    for (int i = 1; i < n + 1; ++i)
    {
    	cin>>coins[i];
    }

    int table[n+1][amount+1];

    for (int j = 0; j<amount + 1; ++j)
    {
    	table[0][j] = INT_MAX;
    	table[j][0] = 0;
    }

    for (int i = 1; i < n+1; ++i)
    {
    	for(int j=1; j< amount + 1; j++){
    		if(j>=coins[i]){
    			table[i][j] = min(1 + table[i][j-coins[i]], table[i-1][j]);
    		}else{
    			table[i][j] =table[i-1][j];
    		}
    	}
    	
    }

    for (int i = 1; i < n+1; ++i)
    {
    	for(int j=1; j< amount + 1; j++){
    		cout<<table[i][j]<<" ";
    	}cout<<endl;
    	
    }

    int i=n,j=amount;
    cout << "Coins : ";
    while(table[i][j]!=0) {
        if(table[i][j] != table[i-1][j]) {
            cout << coins[i] << " ";
            j-=coins[i];
        }
        else {
            i--;
        }
    }
    cout << endl;

}