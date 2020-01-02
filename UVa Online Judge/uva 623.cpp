#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,carry,multiply,fac_size;
    int fac[3000];
    while(cin>>n)
    {
        carry = 0;

        fac[0] = 1;
        fac_size = 1;

        cout<<n<<"!"<<endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<fac_size; j++)
            {
                multiply = fac[j]*i + carry;
                fac[j] = multiply%10;
                carry = multiply/10;
            }
            while(carry>0)
            {
                fac[fac_size] = carry%10;
                carry/=10;
                fac_size++;
            }
        }
        reverse(fac,fac+fac_size);
        for(int i=0; i<fac_size; i++)
            cout<<fac[i];
        cout<<endl;
    }
}
