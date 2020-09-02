#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
    int rod_size;
    cin>>rod_size;

    int value[rod_size+1];
    for (int i = 1; i < rod_size + 1; ++i)
    {
    	cin>>value[i];
    }

    int table[rod_size+1][rod_size+1];

    memset(table, 0 , sizeof(table));

    for (int i = 1; i < rod_size + 1; ++i)
    {
    	for(int j=1; j< rod_size + 1; j++){
    		if(j>= i){
    			table[i][j] = max(value[i]+ table[i][j-i], table[i-1][j]);
    		}else{
    			table[i][j] = table[i-1][j];
    		}
    	}
    }

    for (int i = 0; i < rod_size + 1; ++i)
    {
    	for(int j=0; j< rod_size + 1; j++){
    		cout<<table[i][j]<<" ";
    	}cout<<endl;
    }

    int i,j;
    i=j=rod_size;

    while(table[i][j]!=0){
    	if(table[i][j]!= table[i-1][j]){
    		cout<<"rod :"<< i<< " : profit :"<<value[i]<<endl;
    		j-=i;
    	}else{
    		i--;
    	}
    }

    cout<<table[rod_size][rod_size]<<endl;
}