#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin>>tc;
    while(tc--){
    string a,b;
    cin>>a>>b;

    int row = b.size();
    int col = a.size();

    int table[row+1][col+1];

    memset(table, 0, sizeof(table));

    for (int i = 1,k=0; i < row + 1; ++i,k++)
    {
        for(int j = 1,n=0; j<col + 1; ++j,n++){

            if(a[n]==b[k]){
                table[i][j] = table[i-1][j-1] + 1;
            }else{
                table[i][j] = max(table[i-1][j], table[i][j-1]);
            }
        }
    }


    string sub;

    while(table[row][col]!=0){
        if(table[row][col] == table[row][col-1]){
            col--;
        }else if(table[row][col] == table[row-1][col]){
            row--;
        }else if(table[row][col] == table[row-1][col-1]+1){
            sub.push_back(a[col-1]);
            row--;
            col--;
        }
    }
    reverse(sub.begin(),sub.end());


    cout<<sub.length()<<endl;
    }

    
}