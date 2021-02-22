#include <bits/stdc++.h>
//did not solved yet
using namespace std;

int main()
{
    long long int tc, a, b, c, aa, bb;
    cin >> tc;
    int arr[10];
    while (tc--)
    {
        cin >> a >> b;

        if (a == b)
        {
            cout << "2" << endl;
        }
        else if (b > a)
        {
            cout << "1" << endl;
        }
        else
        {
            c = 0;
            aa = a;
            bb = b;
            bool flag = true;

            for (int i = 0; i < 10; i++)
            {

                while (true)
                {
                    // cout<<a<<" "<<b<<endl;
                    a = floor(a / b);
                    // cout<<a<<endl;
                    c++;
                    if (a == 0)
                        break;
                }

                b++;
                a = aa;

                arr[i] = c + i;
            }

            // for(int i=0; i<10; i++)cout<<arr[i]<<" ";
            // cout<<endl;

            sort(arr, arr + 10);
            cout << arr[0] << endl;
        }
    }

    return 0;
}
