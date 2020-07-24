#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll num[1000005];
ll temp[1000005];


int mergeSort(ll low, ll high)
{
	
	if(low == high)
		return 0;

	ll mid = (low + high)/2;

	mergeSort(low, mid);
	mergeSort(mid+1, high);

	ll i=low, j = mid + 1;

	for(ll k=low; k<=high; k++){
		if(i==mid+1){
			temp[k] = num [j];
			j += 1;
		}else if(j==high + 1){
			temp[k] = num[i];
			i+=1;
		}else if(num[i]<num[j]){
			temp[k] = num[i];
			i+=1;
		}else{
			temp[k] = num[j];
			j+=1;
		}
	}

	for(ll k=low; k<=high; k++){
		num[k] = temp[k];
	}

	return 0;
}

int main()
{
 
    ll n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>num[i];
    }
    mergeSort(0,n-1);
    ll ans = num[n/2];
    cout<<ans<<endl;

}