#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else return gcd(b, a%b);
}

int main()
{
	double p,q;
	p = 3;
	q = 7;

	double n = p * q;

	double encrypt = 2;

	double phiofn = (p - 1) * (q - 1);

	while(encrypt < phiofn) {
	    if(gcd(encrypt, phiofn)==1)
	    	break;
	    else
	    	encrypt ++;
	}

	int k = 2;
	double decrypt = (1 + (k * phiofn))/ encrypt;

	double message = 10;

	cout<<"Original Message :"<<message<<endl;

	double cyphertext = pow(message, encrypt);

	cyphertext = fmod(cyphertext , n);

	cout<<"Encrypted Message :"<<cyphertext<<endl;

	double realtext = pow(cyphertext, decrypt);

	realtext = fmod(realtext , n);

	cout<<"Original Message after decrypt :"<<realtext<<endl;

}