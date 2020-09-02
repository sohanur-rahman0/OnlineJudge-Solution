#include<bits/stdc++.h>
using namespace std;
#define INF 320000
vector<int>coins = {50,25,10,5,1};
//recursive solution

// int solve(int x)
// {
// 	if(x<0)return INF;
// 	if(x==0){
//         return 0;
//     }
// 	int best = INF;
// 	for(auto i:coins){
// 		best = min(best,solve(x-i)+1);
// 	}
// 	return best;
// }
//dynamic solution
int value[INF]= {0};
bool ready[INF] = {false};

int solve(int x)
{
    if(x<0)
        return INF;
    if(x==0){
        return 0;
    }
    if(ready[x])
        return value[x];
    int best = INF;
    for(auto c:coins)
    {
        best = min(best,solve(x-c)+1);
    }
    value[x] = best;
    ready[x] = true;
    return best;
}

int main()
{

    cout<<solve(11)<<endl;
    
    for(int i=0; i<100; i++)
        cout<<value[i]<<' ';
    //iterative solution
    value[0] = 0;
    int n = 1050;
    for(int x=1; x<=n; x++)
    {
        value[x] = INF;
        for(auto c: coins)
        {
            if(x-c>=0)
                value[x] = min(value[x],value[x-c]+1);///iteratively generating the value array
        }
    }
    cout<<value[n]<<endl;


    return 0;
}
