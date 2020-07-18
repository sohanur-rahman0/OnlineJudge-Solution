#include <bits/stdc++.h>
using namespace std;
int primeFactor(int n,set<int>&pfac)
{
	while(n%2==0){
		pfac.insert(2);
		n/=2;
	}

	for(int i=3; i*i <=n; i+=2)
	{
		while(n%i==0){
			pfac.insert(i);
			n/=i;
		}
	}
	if(n>2){
		pfac.insert(n);
	}

	return pfac.size();
}

int main()
{
    int n;
    set<int>pfac;
    while(cin>>n) {
        if(n==0) break;
        cout << n << " : " << primeFactor(n,pfac) << endl;
        pfac.clear();

    }
}




