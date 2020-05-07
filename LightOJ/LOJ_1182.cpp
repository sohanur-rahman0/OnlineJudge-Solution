#include<bits/stdc++.h>
using namespace std;

string toBin(int n){
	string bin = "";
	int rem;
	while(n!=0){
		rem = n%2;
		bin = bin + to_string(rem);
		n/=2;
	}
	
	reverse(bin.begin(),bin.end());
	return bin;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++){
    	int n;
    	cin>>n;
    	int c = 0;
    	string bin = toBin(n);
    	for(int i = 0; bin[i]; i++){
    		if(bin[i]=='1')c++;
    	}
    	if(c%2==0){
    		cout<<"Case "<<t<<": even"<<endl;
    	}else{
    		cout<<"Case "<<t<<": odd"<<endl;
    	}
    }



}