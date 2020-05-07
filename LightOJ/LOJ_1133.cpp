#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc,n,m;
    cin>>tc;
    for(int t=1; t<=tc; t++){
    	cin>>n>>m;
    
    	vector<int>arr;
    	int x;
    	for(int i=0; i<n; i++){
    		cin>>x;
    		arr.push_back(x);
    	}
    	
    	while(m--){
    		char c;
    		cin>>c;
    		
    		if(c=='S'){
    			int sum;
    			cin>>sum;
    			for(int i=0;i<n; i++){
    				arr[i] = arr[i] + sum;
    			}
    		}else if(c=='M'){
    			int mul;
    			cin>>mul;
    			for(int i=0;i<n; i++){
    				arr[i] = arr[i] * mul;
    			}

    		}else if(c=='D'){
    			int div;
    			cin>>div;
    			for(int i=0;i<n; i++){
    				arr[i] = arr[i] / div;
    			}
    		}else if(c=='R'){
    			reverse(arr.begin(),arr.end());
    		}else if(c=='P'){
    			int y,z;
    			cin>>y>>z;
    			swap(arr[y],arr[z]);
    		}
    	}
    	cout<<"Case "<<t<<":"<<endl;
    	cout<<arr[0];
    	for(int itr = 1; itr<n; itr++){
    		cout<<' '<<arr[itr];
    	}
    	cout<<endl;
    	
    }

}