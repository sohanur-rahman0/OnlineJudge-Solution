#include<bits/stdc++.h>
using namespace std;
int co=0;
void DFS(int arr[][20],int i,int n)
{
    static int visited[20] = {0};
    if(visited[i]==0)
    {
        co++;
        cout<<i<<" ";
        visited[i] = 1;
        for(int j=0; j<=n; j++)
        {
            if(arr[i][j]==1 && visited[j]==0)
            {
                DFS(arr,j,n);
            }
        }
    }
}
int main()
{
    int arr[20][20]= {0};
//
//    arr[9][6] = 1;
//    arr[1][2] = 1;
//
//    arr[1][4] = 1;
//    arr[4][7] = 1;
//    arr[7][8] = 1;
//    arr[4][1] = 1;
//
//    arr[4][3] = 1;

//    arr[1][2] = 1;
//    arr[1][3] = 1;
//
//    arr[2][1] = 1;
//    arr[2][4] = 1;
//    arr[3][1] = 1;
//    arr[3][4] = 1;
//
//    arr[4][2] = 1;
//    arr[4][3] = 1;
//    arr[4][5] = 1;
//    arr[4][6] = 1;
//
//    arr[5][4] = 1;
//
//    arr[6][4] = 1;
    arr[0][4] = 1;
    arr[2][3] = 1;

    arr[6][2] = 1;
    arr[8][9] = 1;
    arr[10][9] = 1;
    arr[8][12] = 1;
    arr[14][15] = 1;
    arr[14][10] = 1;
    arr[6][5] = 1;

    arr[10][11] = 1;
    arr[11][7] = 1;

    arr[4][8]=1;
    arr[0][1]=1;
    arr[1][2]=1;
    arr[12][13]=1;
    int k=0;
    for(int i=0; i<16; i++){
        for(int j=0; j<16; j++){
            cout<<arr[i][j]<<" ";
            if(arr[i][j]==1)k++;
        }
        cout<<endl;
    }
    cout<<k<<endl;

    DFS(arr,0,16);
    cout<<endl<<co<<endl;


}
