#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc,n,k;
	cin>>tc;
	while(tc--){
		cin>>n>>k;

		if(k>=n){
			cout<<abs(k-n)<<endl;
		}else{
			if(n%2==0 && k%2==0){
				cout<<"0"<<endl;
			}else if(n%2==1 && k%2==1){
				cout<<"0"<<endl;
			}else{
				cout<<"1"<<endl;
			}

		}
		
	}

}