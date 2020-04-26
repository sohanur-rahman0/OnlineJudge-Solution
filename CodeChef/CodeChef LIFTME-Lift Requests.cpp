#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int tc;
	cin>>tc;
	while(tc--){
		int n,q;
		cin>>n>>q;
		//bool flag = false;
		int ans = 0,current_floor = 0;
		while(q--){
			int f,d;
			cin>>f>>d;
			if (current_floor==f)
			{
				ans += abs(f - d);
				current_floor = d;
			}
			else if(f>current_floor){
				ans += f - current_floor;
				ans += abs(d - f);
				current_floor = d;
			}else{
				ans += current_floor - f;
				ans += abs(d - f);
				current_floor = d;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
