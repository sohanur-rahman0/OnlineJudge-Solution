#include<bits/stdc++.h>
using namespace std;
#define ll long long

int BinarySearch(ll arr[],ll begin,ll end,ll key)
{
    
    //int end = sizeof(arr)/sizeof(arr[0])-1;
    //int index = 0;
    while(begin<=end){
        int mid = (begin+end)/2;
        if(key == arr[mid]){
            return mid + 1;
            //break;
        }
        else if(key>arr[mid])
            begin = mid + 1;
        else if(key<arr[mid])
            end = mid - 1;

            //return index;
    }
    return -10;
}

int main()
{
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    ll n;
    while(cin>>n){
    	ll arr[n],m;
    	for(int i=0; i<n; i++)cin>>arr[i];

    	cin>>m;	

    	sort(arr,arr+n);

    	ll s,p,a,b;

    	for(int i = 0; i<n-1; i++){
    		s = m - arr[i];
    		p = BinarySearch(arr,i+1,n-1,s);
    		if(p!=-10){
    			a = arr[i];
    			b = s;
    		}
    	}
    	//cout<<a<<' '<<b<<endl;
    	cout<<"Peter should buy books whose prices are "<<min(a,b)<<" and "<<max(a,b)<<"."<<endl<<endl;


    }



	return 0;
}