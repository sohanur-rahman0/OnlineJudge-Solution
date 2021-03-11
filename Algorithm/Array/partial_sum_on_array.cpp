#include<bits/stdc++.h>
using namespace std;

int sum[100];

void build_partial_sum(int a[], int n)
{
    sum[1] = a[0];
    for(int i=2; i<=n; i++ ){
        sum[i] = sum[i-1] + a[i-1];
    }
}

long long query(int x, int y){
    return sum[y] - sum[x-1];
}
int main()
{
    int a[3] = {1,2,3};
    build_partial_sum(a,3);
    cout<<query(1,3)<<endl;

}