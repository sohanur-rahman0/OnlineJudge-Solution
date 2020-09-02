#include<bits/stdc++.h>
using namespace std;

#define ll long long

int MinStep[1000];

int MST1(ll num)
{
	if(MinStep[num]!=-1) return MinStep[num];
	if(num==1) return 0;

	int x,y,z;
	x=y=z = INT_MAX;

	x = MST1(num-1) + 1;

	if(num%2==0) y = MST1(num/2) + 1;
	if (num%3==0) z = MST1(num/3) + 1;

	return MinStep[num] = min(min(x,y),z);
	
}

int main()
{

    memset(MinStep, -1, sizeof(MinStep));

    ll num;
    cin>>num;

    cout<<MST1(num)<<endl;

}