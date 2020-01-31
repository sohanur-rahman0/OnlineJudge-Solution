#include<bits/stdc++.h>
using namespace std;
int arr[16][16]= {0};
int co=1;
void BFS(int i,int n)
{
    int visited[60] = {0};
    cout<<i<<" ";
    visited[i] = 1;
    queue<int>node;
    node.push(i);
    while(!node.empty())
    {
        int c = node.front();
        node.pop();
        for(int i=0; i<n; i++)
        {
            if(arr[c][i]==1 && visited[i]==0)
            {
                cout<<i<<" ";
                node.push(i);
                visited[i] = 1;
                co++;
            }
        }
        //node.pop();
    }

}
int main()
{

    arr[0][4] = 1;
    arr[2][3] = 1;

    arr[6][2] = 1;
    arr[8][9] = 1;
    arr[10][9] = 1;
    arr[8][12] = 1;

    arr[4][3] = 1;
    arr[14][15] = 1;
    arr[14][10] = 1;
    arr[6][5] = 1;

    arr[10][11] = 1;
    arr[11][7] = 1;

    arr[4][8]=1;
    arr[0][1]=1;
    arr[1][2]=1;
    arr[12][13]=1;

//    for(int i=0; i<=6; i++){
//        for(int j=0; j<=6; j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    BFS(0,15);
    cout<<"\n"<<co<<endl;

}
