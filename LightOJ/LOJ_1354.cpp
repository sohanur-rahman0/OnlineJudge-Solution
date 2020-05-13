#include<bits/stdc++.h>
using namespace std;
#define ll long long

string toDec(string n){
	string num = n;
	ll dec = 0; 
	ll base = 1;

	ll len = num.length();

	for(ll i= len-1; i>=0; i--){
		if(num[i]=='1')
			dec += base;
		base = base * 2;
	}
	return to_string(dec);
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
    for(int c=1; c<=tc; c++){
    	string dec,bin,temp,conv = "";
    	cin>>dec>>bin;
    	for(int i=0; bin[i]; i++){
    		if(bin[i]=='.'){
    			conv+=toDec(temp);
    			conv+='.';
    			temp = "";
    			continue;
    		}
    		temp += bin[i];
    	}
    	conv+=toDec(temp);
    	temp = "";
    	//cout<<conv<<endl;
    	cout<<"Case "<<c<<": "; 
    	if(dec==conv){
    		cout<<"Yes"<<endl;
    	}else{
    		cout<<"No"<<endl;
    	}
    	conv.clear();

    	

    }




}