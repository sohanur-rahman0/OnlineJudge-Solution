#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("uva.txt","w",stdout);
	string b;
	int a;
	while(cin>>a>>b)
	{
		if(a==0&&b=="0")
		{
			break;
		}
		int x;
		bool zero=true;
		for(int i=0;i<b.length();i++)
		{
			x=b[i]-48;
			if(x!=a)
			{
				if(x!=0)
				zero=false;
				if(!zero)
				cout<<x;
			}
		}
		if(zero)
		printf("0\n");
		else
		printf("\n");
	}
	return 0;
}
